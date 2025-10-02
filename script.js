function toggleVisibility() {
      const pwd = document.getElementById("password");
      pwd.type = pwd.type === "password" ? "text" : "password";
    }

    function checkPassword() {
      const password = document.getElementById("password").value;
      const result = document.getElementById("result");
      result.innerHTML = "";

      const errors = [];
          
      if (password.length < 6 || password.length > 12) {
        result.innerHTML = `<p class="warning">Invalid length of password. Must be 6-12 characters.</p>`;
        return;
      }

      if (!/[a-z]/.test(password)) errors.push("MISSING LOWER CASE.");
      if (!/[A-Z]/.test(password)) errors.push("MISSING UPPER CASE.");
      if (!/[0-9]/.test(password)) errors.push("MISSING DIGIT.");
      if (!/[!@#$%^&*()_+\-=\[\]{};':\"\\|,.<>\/?]/.test(password)) errors.push("MISSING SPECIAL CHARACTER.");

      if (errors.length > 0) {
        result.innerHTML = errors.map(err => `<p class="warning">${err}</p>`).join("");
      } else {
        let strength = "";
        if (password.length <= 7) strength = "Weak";
        else if (password.length < 10) strength = "Good";
        else strength = "Excellent";

        result.innerHTML = `<p class="success">All checks passed!</p><p><strong>Strength: ${strength}</strong></p>`;
      }
    }

