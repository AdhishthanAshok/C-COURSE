import React from "react";
import Banner_img from "../assets/Banner.png";
import Phone_Banner_img from "../assets/phone_banner.png";

const Hero = () => {
  return (
    <div className="h-auto">
      <div className="hidden lg:block">
        <img
          src={Banner_img}
          alt="Image for large screens"
          className="w-full"
        />
      </div>
      <div className="block lg:hidden">
        <img
          src={Phone_Banner_img}
          alt="Image for small screens"
          className="w-full"
        />
      </div>
    </div>
  );
};

export default Hero;
