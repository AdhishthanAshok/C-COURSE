import React, { useEffect, useState } from "react";

const Home = () => {
  const [data, setData] = useState([]);

  const fetchData = async () => {
    const response = await fetch("http://localhost:3000/")
      .then((res) => res.json())
      .then((aagya) => {
        console.log(aagya);
        setData(aagya);
      });
  };

  useEffect(() => {
    fetchData();
  }, []);

  return (
    <div className="h-auto  text-gray-50 text-4xl flex flex-col gap-5 items-center justify-center">
      <div>Data Incoming</div>
      {data.map((data, index) => (
        <div className="border-gray-600 border-2">
          <div key={index} className="">
            Dev Name == {data.name}
          </div>
          <div key={index} className="">
            Dev Role == {data.role}
          </div>
        </div>
      ))}
    </div>
  );
};

export default Home;
