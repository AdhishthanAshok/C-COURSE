document.getElementById("submitButton").onclick = function () {
  let temp;

  if (document.getElementById("ctemp").checked) {
    temp = document.getElementById("textbox").value;
    temp = Number(temp);
    temp = toCelsius(temp);
    document.getElementById("final").innerHTML = temp + "°C";
  } else if (document.getElementById("ftemp").checked) {
    temp = document.getElementById("textbox").value;
    temp = Number(temp);
    temp = toFahreneheit(temp);
    document.getElementById("final").innerHTML = temp + "°F";
  } else {
    document.getElementById("final").innerHTML = "Select a Value";
  }
};

function toCelsius(temp) {
  return (temp - 32) * (5 / 9);
}
function toFahreneheit(temp) {
  return (temp * 9) / 5 + 32;
}
