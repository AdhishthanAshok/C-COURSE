function generateOTP() {
  // Simulate server-side OTP generation
  const otp = Math.floor(100000 + Math.random() * 900000);

  // Store the generated OTP in a global variable or pass it to the verifyOTP function
  window.generatedOTP = otp;

  // Display the OTP
  alert(`Your OTP is: ${otp}  Note it down.`);
}

function verifyOTP() {
  const email = document.getElementById("email").value;
  const otpInput = document.getElementById("otp").value;

  // Simulate server-side OTP verification
  // In a real scenario, you would retrieve the stored OTP from your server/database based on the email

  if (otpInput === window.generatedOTP.toString()) {
    document.getElementById("message").innerText =
      "OTP Verified successfully! Redirecting...";

    // Wait for 3 seconds and then redirect
    setTimeout(function () {
      window.location.href = "../Bot/index.html";
    }, 2000);
  } else {
    document.getElementById("message").innerText =
      "Incorrect OTP. Please try again.";
  }
}
