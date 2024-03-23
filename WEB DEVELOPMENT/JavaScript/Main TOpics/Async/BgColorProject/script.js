const randomColor = function () {
  const hex = "0123456789ABCDEF";
  let color = "#";
  for (let i = 0; i < 6; i++) {
    color += hex[Math.floor(Math.random() * 16)];
  }
  return color;
};

let intervals;
const startChangingColor = function () {
  if (!intervals) {
    intervals = setInterval(changeBgColor, 500);
  }
  function changeBgColor() {
    document.body.style.backgroundColor = randomColor();
  }
};
const stopChangingColor = function () {
  clearInterval(intervals);
  intervals = null;
};

const resetColor = function () {
  document.body.style.backgroundColor = "#212121";
  clearInterval(intervals);
  intervals = null;
};

document.querySelector("#start").addEventListener("click", startChangingColor);
document.querySelector("#end").addEventListener("click", stopChangingColor);
document.querySelector("#Reset").addEventListener("click", resetColor);
