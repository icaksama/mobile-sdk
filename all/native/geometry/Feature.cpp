#include "Feature.h"
#include "geometry/Geometry.h"

namespace carto {

    Feature::Feature(const std::shared_ptr<Geometry>& geometry, Variant properties) :
        _geometry(geometry),
        _properties(std::move(properties))
    {
    }
    
    Feature::~Feature() {
    }
    
    const std::shared_ptr<Geometry>& Feature::getGeometry() const {
        return _geometry;
    }
    
    const Variant& Feature::getProperties() const {
        return _properties;
    }
    
}
