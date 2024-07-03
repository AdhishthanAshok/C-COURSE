import React from "react";

const Item = (props) => {
  return (
    <div className="flex-shrink-0 w-[calc(25% - 2rem)] sm:w-[calc(25% - 1rem)] md:w-[calc(25% - 0.5rem)] lg:w-[calc(25% - 0.25rem)] p-4 h-auto flex flex-col justify-center items-center bg-white dark:bg-gray-800 shadow-md gap-1 mx-2 transform  hover:border hover:border-blue-500 dark:hover:border-blue-300 active:scale-95">
      <img
        src={props.image}
        alt="image"
        className="w-32"
        style={{ maxWidth: "100%", maxHeight: "100%" }}
      />
      <p className="text-base sm:text-lg md:text-xl text-gray-800 dark:text-gray-50 font-medium mt-2">
        {props.name}
      </p>
      <div className="flex justify-center items-center">
        <div className="text-gray-800 dark:text-gray-50 text-sm sm:text-base md:text-lg font-semibold">
          ₹{props.new_price}
        </div>
        <div className="text-gray-400 text-sm sm:text-base md:text-lg font-medium line-through ml-2">
          ₹{props.old_price}
        </div>
      </div>
    </div>
  );
};

export default Item;
