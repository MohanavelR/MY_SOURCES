import React from 'react'
import cloud_rain from '../assets/images/cloud_Rain.png'
import cloud from '../assets/images/cloud.png'
import happy from '../assets/images/happy.png'
import sun from '../assets/images/sun.png'
import wind  from '../assets/images/wind.png'

const Images = () => {
  return (
    <div>
      <h1>Images</h1>
      <img src={cloud_rain} alt="" />
      <img src={cloud} alt="" />
      <img src={happy} alt="" />
      <img src={sun} alt="" />
      <img src={wind} alt="" />
    </div>
  )
}

export default Images;
