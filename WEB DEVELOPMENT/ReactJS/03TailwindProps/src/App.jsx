import { useState } from "react";
import "./App.css";
import Card from "./components/Card";

function App() {
  const [count, setCount] = useState(0);
  let newMyObect = {
    userName: "Adi",
    age: 21,
  };
  let newArr = [1, 2, 3];

  return (
    <>
      <Card
        ShoeName="Nike"
        btnText="Click here"
        img="https://static.nike.com/a/images/t_PDP_1280_v1/f_auto,q_auto:eco/e4060b19-289e-43b4-8375-c047c1cf6ab6/air-max-pulse-shoes-2bZSZV.png"
      />
      <Card
        ShoeName="Adidas"
        btnText="Visit here"
        img="https://assets.adidas.com/images/w_600,f_auto,q_auto/0cf53065f4e443f0a0c245cdbccbb43d_9366/GRIP-ED_RUN_SHOES_Black_IQ8998_01_standard.jpg"
      />
    </>
  );
}

export default App;
