const form = document.querySelector("form"); // Beacuse we have to Submit the form ., i.e we select the form

form.addEventListener("submit", function (e) {
  e.preventDefault();

  const height = parseInt(document.querySelector("#height").value);
  const weight = parseInt(document.querySelector("#weight").value);
  const results = document.querySelector("#results");

  if (height === "" || height < 0 || isNaN(height)) {
    results.innerHTML = `Please Give valid Height ${height}`;
  }
  if (weight === "" || weight < 0 || isNaN(weight)) {
    results.innerHTML = `Please Give valid weight ${weight}`;
  } else {
    results.innerHTML = `<span>${(weight / ((height * height) / 10000)).toFixed(
      2
    )}</span>`;
  }
});
