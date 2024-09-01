import React, { useEffect } from "react";

const arr1 = [1, 2, 3];

const Weather = () => {
  useEffect(() => {
    arr1.push(4, 5, 6);
  }, []);
  return <div>{console.log(arr1)}</div>;
};

export default Weather;
