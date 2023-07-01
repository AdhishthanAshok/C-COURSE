document.addEventListener("DOMContentLoaded", function () {
  // Initialize attendance record
  const attendanceRecord = {};

  // Get HTML elements
  const loginForm = document.querySelector("#login-form");
  const signupForm = document.querySelector("#signup-form");
  const attendanceForm = document.querySelector("#attendance-form");
  const attendanceRecordDiv = document.querySelector("#attendance-record");
  const loginError = document.querySelector("#login-error");
  const signupSuccess = document.querySelector("#signup-success");
  const signupError = document.querySelector("#signup-error");
  const attendanceError = document.querySelector("#attendance-error");
  const attendanceSuccess = document.querySelector("#attendance-success");
  const recordTable = document.querySelector("#record-table");

  // Hide forms and attendance record by default
  loginForm.style.display = "none";
  signupForm.style.display = "none";
  attendanceForm.style.display = "none";
  attendanceRecordDiv.style.display = "none";

  // Show login form
  loginForm.style.display = "block";

  // Handle login form submission
  loginForm.addEventListener("submit", function (event) {
    event.preventDefault();
    const username = document.querySelector("#username").value;
    const password = document.querySelector("#password").value;

    // Check if username and password are correct (dummy data for demonstration)
    if (username === "john" && password === "password") {
      // Login successful
      loginError.textContent = "";
      loginForm.reset();
      loginForm.style.display = "none";
      attendanceForm.style.display = "block";
      attendanceRecordDiv.style.display = "block";
    } else {
      // Login failed
      loginError.textContent = "Invalid username or password";
    }
  });

  // Handle signup form submission
  signupForm.addEventListener("submit", function (event) {
    event.preventDefault();
    const fullname = document.querySelector("#fullname").value;
    const email = document.querySelector("#email").value;
    const newUsername = document.querySelector("#new-username").value;
    const newPassword = document.querySelector("#new-password").value;

    // Dummy signup process (no data storage)
    signupSuccess.textContent = "Signup successful! Please login.";
    signupForm.reset();
  });

  // Handle attendance form submission
  attendanceForm.addEventListener("submit", function (event) {
    event.preventDefault();
    const selectedSubject = document.querySelector("#subject").value;
    const attendance = document.querySelector("#attendance").value;

    // Validate attendance value
    if (attendance < 0 || attendance > 100 || isNaN(attendance)) {
      attendanceError.textContent = "Invalid attendance value";
      attendanceSuccess.textContent = "";
    } else {
      // Record attendance (dummy data for demonstration)
      attendanceRecord[selectedSubject] = attendance;

      attendanceError.textContent = "";
      attendanceSuccess.textContent = "Attendance recorded successfully!";
      attendanceForm.reset();

      // Update attendance record table
      updateAttendanceRecord();
    }
  });

  // Function to update the attendance record table
  function updateAttendanceRecord() {
    // Clear previous table rows
    while (recordTable.rows.length > 1) {
      recordTable.deleteRow(1);
    }

    // Add new rows to the table
    for (const subject in attendanceRecord) {
      const attendance = attendanceRecord[subject];
      const row = recordTable.insertRow();

      const subjectCell = row.insertCell();
      const attendanceCell = row.insertCell();

      subjectCell.textContent = subject;
      attendanceCell.textContent = attendance;
    }
  }
});
