import React from "react";
import data_product from "../assets/data";
import Item from "../Item/Item";

const Popular = () => {
  return (
    <div className="flex flex-col items-center bg-gray-50 dark:bg-gray-900 text-gray-800 dark:text-gray-50 mt-4 min-h-screen">
      <h1 className="text-center text-4xl font-bold pt-4">TRENDING FOOTWEAR</h1>
      <div className="flex flex-nowrap overflow-x-auto scrollbar-hide w-full px-4 mt-8">
        {data_product.map((item, i) => (
          <Item
            key={i}
            id={item.id}
            name={item.name}
            image={item.image}
            old_price={item.old_price}
            new_price={item.new_price}
          />
        ))}
      </div>
      <div className="text-center bg-blue-500 hover:bg-blue-600 text-white py-2 px-6 rounded-md shadow-md mt-4">
        <button className="text-lg font-medium">Explore More &#8594;</button>
      </div>
    </div>
  );
};

export default Popular;
