classdef ModelSolidShapes < SwigRef
  methods
    function this = swig_this(self)
      this = iDynTreeMEX(3, self);
    end
    function self = ModelSolidShapes(varargin)
      if nargin==1 && strcmp(class(varargin{1}),'SwigRef')
        if ~isnull(varargin{1})
          self.swigPtr = varargin{1}.swigPtr;
        end
      else
        tmp = iDynTreeMEX(1107, varargin{:});
        self.swigPtr = tmp.swigPtr;
        tmp.swigPtr = [];
      end
    end
    function varargout = clear(self,varargin)
      [varargout{1:nargout}] = iDynTreeMEX(1108, self, varargin{:});
    end
    function delete(self)
      if self.swigPtr
        iDynTreeMEX(1109, self);
        self.swigPtr=[];
      end
    end
    function varargout = resize(self,varargin)
      [varargout{1:nargout}] = iDynTreeMEX(1110, self, varargin{:});
    end
    function varargout = isConsistent(self,varargin)
      [varargout{1:nargout}] = iDynTreeMEX(1111, self, varargin{:});
    end
    function varargout = linkSolidShapes(self, varargin)
      narginchk(1, 2)
      if nargin==1
        nargoutchk(0, 1)
        varargout{1} = iDynTreeMEX(1112, self);
      else
        nargoutchk(0, 0)
        iDynTreeMEX(1113, self, varargin{1});
      end
    end
  end
  methods(Static)
  end
end
