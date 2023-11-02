//
// generated automatically from "ISystemAudioPlayer.h"
//
// implements RPC proxy stubs for:
//   - class Exchange::ISystemAudioPlayer
//   - class Exchange::ISystemAudioPlayer::INotification
//

#include "Module.h"
#include "ISystemAudioPlayer.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUB
    // -----------------------------------------------------------------

    //
    // Exchange::ISystemAudioPlayer interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Configure(PluginHost::IShell*) = 0
    //  (1) virtual void Register(Exchange::ISystemAudioPlayer::INotification*) = 0
    //  (2) virtual void Unregister(Exchange::ISystemAudioPlayer::INotification*) = 0
    //  (3) virtual uint32_t Open(const string&, string&) = 0
    //  (4) virtual uint32_t Play(const string&, string&) = 0
    //  (5) virtual uint32_t PlayBuffer(const string&, string&) = 0
    //  (6) virtual uint32_t Pause(const string&, string&) = 0
    //  (7) virtual uint32_t Resume(const string&, string&) = 0
    //  (8) virtual uint32_t Stop(const string&, string&) = 0
    //  (9) virtual uint32_t Close(const string&, string&) = 0
    //  (10) virtual uint32_t SetMixerLevels(const string&, string&) = 0
    //  (11) virtual uint32_t SetSmartVolControl(const string&, string&) = 0
    //  (12) virtual uint32_t IsPlaying(const string&, string&) = 0
    //  (13) virtual uint32_t Config(const string&, string&) = 0
    //  (14) virtual uint32_t GetPlayerSessionId(const string&, string&) = 0
    //

    ProxyStub::MethodHandler ExchangeSystemAudioPlayerStubMethods[] = {
        // virtual uint32_t Configure(PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::Data::Input& input(message->Parameters());

            // read parameters
            RPC::Data::Frame::Reader reader(input.Reader());
            Core::instance_id param0 = reader.Number<Core::instance_id>();
            PluginHost::IShell* param0_proxy = nullptr;
            ProxyStub::UnknownProxy* param0_proxy_inst = nullptr;
            if (param0 != 0) {
                param0_proxy_inst = RPC::Administrator::Instance().ProxyInstance(channel, param0, false, param0_proxy);
                ASSERT((param0_proxy_inst != nullptr) && (param0_proxy != nullptr) && "Failed to get instance of PluginHost::IShell proxy");

                if ((param0_proxy_inst == nullptr) || (param0_proxy == nullptr)) {
                    TRACE_L1("Failed to get instance of PluginHost::IShell proxy");
                }
            }

            // write return value
            RPC::Data::Frame::Writer writer(message->Response().Writer());

            // call implementation
            Exchange::ISystemAudioPlayer* implementation = reinterpret_cast<Exchange::ISystemAudioPlayer*>(input.Implementation());
            ASSERT((implementation != nullptr) && "Null Exchange::ISystemAudioPlayer implementation pointer");
            const uint32_t output = implementation->Configure(param0_proxy);
            writer.Number<const uint32_t>(output);

            if (param0_proxy_inst != nullptr) {
                RPC::Administrator::Instance().Release(param0_proxy_inst, message->Response());
            }
        },

        // virtual void Register(Exchange::ISystemAudioPlayer::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::Data::Input& input(message->Parameters());

            // read parameters
            RPC::Data::Frame::Reader reader(input.Reader());
            Core::instance_id param0 = reader.Number<Core::instance_id>();
            Exchange::ISystemAudioPlayer::INotification* param0_proxy = nullptr;
            ProxyStub::UnknownProxy* param0_proxy_inst = nullptr;
            if (param0 != 0) {
                param0_proxy_inst = RPC::Administrator::Instance().ProxyInstance(channel, param0, false, param0_proxy);
                ASSERT((param0_proxy_inst != nullptr) && (param0_proxy != nullptr) && "Failed to get instance of Exchange::ISystemAudioPlayer::INotification proxy");

                if ((param0_proxy_inst == nullptr) || (param0_proxy == nullptr)) {
                    TRACE_L1("Failed to get instance of Exchange::ISystemAudioPlayer::INotification proxy");
                }
            }

            // call implementation
            Exchange::ISystemAudioPlayer* implementation = reinterpret_cast<Exchange::ISystemAudioPlayer*>(input.Implementation());
            ASSERT((implementation != nullptr) && "Null Exchange::ISystemAudioPlayer implementation pointer");
            implementation->Register(param0_proxy);

            if (param0_proxy_inst != nullptr) {
                RPC::Administrator::Instance().Release(param0_proxy_inst, message->Response());
            }
        },

        // virtual void Unregister(Exchange::ISystemAudioPlayer::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::Data::Input& input(message->Parameters());

            // read parameters
            RPC::Data::Frame::Reader reader(input.Reader());
            Core::instance_id param0 = reader.Number<Core::instance_id>();
            Exchange::ISystemAudioPlayer::INotification* param0_proxy = nullptr;
            ProxyStub::UnknownProxy* param0_proxy_inst = nullptr;
            if (param0 != 0) {
                param0_proxy_inst = RPC::Administrator::Instance().ProxyInstance(channel, param0, false, param0_proxy);
                ASSERT((param0_proxy_inst != nullptr) && (param0_proxy != nullptr) && "Failed to get instance of Exchange::ISystemAudioPlayer::INotification proxy");

                if ((param0_proxy_inst == nullptr) || (param0_proxy == nullptr)) {
                    TRACE_L1("Failed to get instance of Exchange::ISystemAudioPlayer::INotification proxy");
                }
            }

            // call implementation
            Exchange::ISystemAudioPlayer* implementation = reinterpret_cast<Exchange::ISystemAudioPlayer*>(input.Implementation());
            ASSERT((implementation != nullptr) && "Null Exchange::ISystemAudioPlayer implementation pointer");
            implementation->Unregister(param0_proxy);

            if (param0_proxy_inst != nullptr) {
                RPC::Administrator::Instance().Release(param0_proxy_inst, message->Response());
            }
        },

        // virtual uint32_t Open(const string&, string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::Data::Input& input(message->Parameters());

            // read parameters
            RPC::Data::Frame::Reader reader(input.Reader());
            const string param0 = reader.Text();
            string param1{}; // storage

            // call implementation
            Exchange::ISystemAudioPlayer* implementation = reinterpret_cast<Exchange::ISystemAudioPlayer*>(input.Implementation());
            ASSERT((implementation != nullptr) && "Null Exchange::ISystemAudioPlayer implementation pointer");
            const uint32_t output = implementation->Open(param0, param1);

            // write return values
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<const uint32_t>(output);
            writer.Text(param1);
        },

        // virtual uint32_t Play(const string&, string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::Data::Input& input(message->Parameters());

            // read parameters
            RPC::Data::Frame::Reader reader(input.Reader());
            const string param0 = reader.Text();
            string param1{}; // storage

            // call implementation
            Exchange::ISystemAudioPlayer* implementation = reinterpret_cast<Exchange::ISystemAudioPlayer*>(input.Implementation());
            ASSERT((implementation != nullptr) && "Null Exchange::ISystemAudioPlayer implementation pointer");
            const uint32_t output = implementation->Play(param0, param1);

            // write return values
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<const uint32_t>(output);
            writer.Text(param1);
        },

        // virtual uint32_t PlayBuffer(const string&, string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::Data::Input& input(message->Parameters());

            // read parameters
            RPC::Data::Frame::Reader reader(input.Reader());
            const string param0 = reader.Text();
            string param1{}; // storage

            // call implementation
            Exchange::ISystemAudioPlayer* implementation = reinterpret_cast<Exchange::ISystemAudioPlayer*>(input.Implementation());
            ASSERT((implementation != nullptr) && "Null Exchange::ISystemAudioPlayer implementation pointer");
            const uint32_t output = implementation->PlayBuffer(param0, param1);

            // write return values
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<const uint32_t>(output);
            writer.Text(param1);
        },

        // virtual uint32_t Pause(const string&, string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::Data::Input& input(message->Parameters());

            // read parameters
            RPC::Data::Frame::Reader reader(input.Reader());
            const string param0 = reader.Text();
            string param1{}; // storage

            // call implementation
            Exchange::ISystemAudioPlayer* implementation = reinterpret_cast<Exchange::ISystemAudioPlayer*>(input.Implementation());
            ASSERT((implementation != nullptr) && "Null Exchange::ISystemAudioPlayer implementation pointer");
            const uint32_t output = implementation->Pause(param0, param1);

            // write return values
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<const uint32_t>(output);
            writer.Text(param1);
        },

        // virtual uint32_t Resume(const string&, string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::Data::Input& input(message->Parameters());

            // read parameters
            RPC::Data::Frame::Reader reader(input.Reader());
            const string param0 = reader.Text();
            string param1{}; // storage

            // call implementation
            Exchange::ISystemAudioPlayer* implementation = reinterpret_cast<Exchange::ISystemAudioPlayer*>(input.Implementation());
            ASSERT((implementation != nullptr) && "Null Exchange::ISystemAudioPlayer implementation pointer");
            const uint32_t output = implementation->Resume(param0, param1);

            // write return values
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<const uint32_t>(output);
            writer.Text(param1);
        },

        // virtual uint32_t Stop(const string&, string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::Data::Input& input(message->Parameters());

            // read parameters
            RPC::Data::Frame::Reader reader(input.Reader());
            const string param0 = reader.Text();
            string param1{}; // storage

            // call implementation
            Exchange::ISystemAudioPlayer* implementation = reinterpret_cast<Exchange::ISystemAudioPlayer*>(input.Implementation());
            ASSERT((implementation != nullptr) && "Null Exchange::ISystemAudioPlayer implementation pointer");
            const uint32_t output = implementation->Stop(param0, param1);

            // write return values
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<const uint32_t>(output);
            writer.Text(param1);
        },

        // virtual uint32_t Close(const string&, string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::Data::Input& input(message->Parameters());

            // read parameters
            RPC::Data::Frame::Reader reader(input.Reader());
            const string param0 = reader.Text();
            string param1{}; // storage

            // call implementation
            Exchange::ISystemAudioPlayer* implementation = reinterpret_cast<Exchange::ISystemAudioPlayer*>(input.Implementation());
            ASSERT((implementation != nullptr) && "Null Exchange::ISystemAudioPlayer implementation pointer");
            const uint32_t output = implementation->Close(param0, param1);

            // write return values
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<const uint32_t>(output);
            writer.Text(param1);
        },

        // virtual uint32_t SetMixerLevels(const string&, string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::Data::Input& input(message->Parameters());

            // read parameters
            RPC::Data::Frame::Reader reader(input.Reader());
            const string param0 = reader.Text();
            string param1{}; // storage

            // call implementation
            Exchange::ISystemAudioPlayer* implementation = reinterpret_cast<Exchange::ISystemAudioPlayer*>(input.Implementation());
            ASSERT((implementation != nullptr) && "Null Exchange::ISystemAudioPlayer implementation pointer");
            const uint32_t output = implementation->SetMixerLevels(param0, param1);

            // write return values
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<const uint32_t>(output);
            writer.Text(param1);
        },

        // virtual uint32_t SetSmartVolControl(const string&, string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::Data::Input& input(message->Parameters());

            // read parameters
            RPC::Data::Frame::Reader reader(input.Reader());
            const string param0 = reader.Text();
            string param1{}; // storage

            // call implementation
            Exchange::ISystemAudioPlayer* implementation = reinterpret_cast<Exchange::ISystemAudioPlayer*>(input.Implementation());
            ASSERT((implementation != nullptr) && "Null Exchange::ISystemAudioPlayer implementation pointer");
            const uint32_t output = implementation->SetSmartVolControl(param0, param1);

            // write return values
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<const uint32_t>(output);
            writer.Text(param1);
        },

        // virtual uint32_t IsPlaying(const string&, string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::Data::Input& input(message->Parameters());

            // read parameters
            RPC::Data::Frame::Reader reader(input.Reader());
            const string param0 = reader.Text();
            string param1{}; // storage

            // call implementation
            Exchange::ISystemAudioPlayer* implementation = reinterpret_cast<Exchange::ISystemAudioPlayer*>(input.Implementation());
            ASSERT((implementation != nullptr) && "Null Exchange::ISystemAudioPlayer implementation pointer");
            const uint32_t output = implementation->IsPlaying(param0, param1);

            // write return values
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<const uint32_t>(output);
            writer.Text(param1);
        },

        // virtual uint32_t Config(const string&, string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::Data::Input& input(message->Parameters());

            // read parameters
            RPC::Data::Frame::Reader reader(input.Reader());
            const string param0 = reader.Text();
            string param1{}; // storage

            // call implementation
            Exchange::ISystemAudioPlayer* implementation = reinterpret_cast<Exchange::ISystemAudioPlayer*>(input.Implementation());
            ASSERT((implementation != nullptr) && "Null Exchange::ISystemAudioPlayer implementation pointer");
            const uint32_t output = implementation->Config(param0, param1);

            // write return values
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<const uint32_t>(output);
            writer.Text(param1);
        },

        // virtual uint32_t GetPlayerSessionId(const string&, string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::Data::Input& input(message->Parameters());

            // read parameters
            RPC::Data::Frame::Reader reader(input.Reader());
            const string param0 = reader.Text();
            string param1{}; // storage

            // call implementation
            Exchange::ISystemAudioPlayer* implementation = reinterpret_cast<Exchange::ISystemAudioPlayer*>(input.Implementation());
            ASSERT((implementation != nullptr) && "Null Exchange::ISystemAudioPlayer implementation pointer");
            const uint32_t output = implementation->GetPlayerSessionId(param0, param1);

            // write return values
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<const uint32_t>(output);
            writer.Text(param1);
        },

        nullptr
    }; // ExchangeSystemAudioPlayerStubMethods[]

    //
    // Exchange::ISystemAudioPlayer::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void OnSAPEvents(const string&) = 0
    //

    ProxyStub::MethodHandler ExchangeSystemAudioPlayerNotificationStubMethods[] = {
        // virtual void OnSAPEvents(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::Data::Input& input(message->Parameters());

            // read parameters
            RPC::Data::Frame::Reader reader(input.Reader());
            const string param0 = reader.Text();

            // call implementation
            Exchange::ISystemAudioPlayer::INotification* implementation = reinterpret_cast<Exchange::ISystemAudioPlayer::INotification*>(input.Implementation());
            ASSERT((implementation != nullptr) && "Null Exchange::ISystemAudioPlayer::INotification implementation pointer");
            implementation->OnSAPEvents(param0);
        },

        nullptr
    }; // ExchangeSystemAudioPlayerNotificationStubMethods[]

    // -----------------------------------------------------------------
    // PROXY
    // -----------------------------------------------------------------

    //
    // Exchange::ISystemAudioPlayer interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Configure(PluginHost::IShell*) = 0
    //  (1) virtual void Register(Exchange::ISystemAudioPlayer::INotification*) = 0
    //  (2) virtual void Unregister(Exchange::ISystemAudioPlayer::INotification*) = 0
    //  (3) virtual uint32_t Open(const string&, string&) = 0
    //  (4) virtual uint32_t Play(const string&, string&) = 0
    //  (5) virtual uint32_t PlayBuffer(const string&, string&) = 0
    //  (6) virtual uint32_t Pause(const string&, string&) = 0
    //  (7) virtual uint32_t Resume(const string&, string&) = 0
    //  (8) virtual uint32_t Stop(const string&, string&) = 0
    //  (9) virtual uint32_t Close(const string&, string&) = 0
    //  (10) virtual uint32_t SetMixerLevels(const string&, string&) = 0
    //  (11) virtual uint32_t SetSmartVolControl(const string&, string&) = 0
    //  (12) virtual uint32_t IsPlaying(const string&, string&) = 0
    //  (13) virtual uint32_t Config(const string&, string&) = 0
    //  (14) virtual uint32_t GetPlayerSessionId(const string&, string&) = 0
    //

    class ExchangeSystemAudioPlayerProxy final : public ProxyStub::UnknownProxyType<Exchange::ISystemAudioPlayer> {
    public:
        ExchangeSystemAudioPlayerProxy(const Core::ProxyType<Core::IPCChannel>& channel, Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Configure(PluginHost::IShell* param0) override
        {
            IPCMessage newMessage(BaseClass::Message(0));

            // write parameters
            RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast<PluginHost::IShell*>(param0));

            // invoke the method handler
            uint32_t output{};
            if ((output = ProxyStub::UnknownProxyType<Exchange::ISystemAudioPlayer>::Invoke(newMessage)) == Core::ERROR_NONE) {
                // read return value
                RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
                output = reader.Number<uint32_t>();

                Complete(reader);
            }

            return output;
        }

        void Register(Exchange::ISystemAudioPlayer::INotification* param0) override
        {
            IPCMessage newMessage(BaseClass::Message(1));

            // write parameters
            RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast<Exchange::ISystemAudioPlayer::INotification*>(param0));

            // invoke the method handler
            if (ProxyStub::UnknownProxyType<Exchange::ISystemAudioPlayer>::Invoke(newMessage) == Core::ERROR_NONE) {
                // read return value
                RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
                Complete(reader);
            }
        }

        void Unregister(Exchange::ISystemAudioPlayer::INotification* param0) override
        {
            IPCMessage newMessage(BaseClass::Message(2));

            // write parameters
            RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast<Exchange::ISystemAudioPlayer::INotification*>(param0));

            // invoke the method handler
            if (ProxyStub::UnknownProxyType<Exchange::ISystemAudioPlayer>::Invoke(newMessage) == Core::ERROR_NONE) {
                // read return value
                RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
                Complete(reader);
            }
        }

        uint32_t Open(const string& param0, string& /* out */ param1) override
        {
            IPCMessage newMessage(BaseClass::Message(3));

            // write parameters
            RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
            writer.Text(param0);

            // invoke the method handler
            uint32_t output{};
            if ((output = ProxyStub::UnknownProxyType<Exchange::ISystemAudioPlayer>::Invoke(newMessage)) == Core::ERROR_NONE) {
                // read return values
                RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
                output = reader.Number<uint32_t>();
                param1 = reader.Text();
            }

            return output;
        }

        uint32_t Play(const string& param0, string& /* out */ param1) override
        {
            IPCMessage newMessage(BaseClass::Message(4));

            // write parameters
            RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
            writer.Text(param0);

            // invoke the method handler
            uint32_t output{};
            if ((output = ProxyStub::UnknownProxyType<Exchange::ISystemAudioPlayer>::Invoke(newMessage)) == Core::ERROR_NONE) {
                // read return values
                RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
                output = reader.Number<uint32_t>();
                param1 = reader.Text();
            }

            return output;
        }

        uint32_t PlayBuffer(const string& param0, string& /* out */ param1) override
        {
            IPCMessage newMessage(BaseClass::Message(5));

            // write parameters
            RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
            writer.Text(param0);

            // invoke the method handler
            uint32_t output{};
            if ((output = ProxyStub::UnknownProxyType<Exchange::ISystemAudioPlayer>::Invoke(newMessage)) == Core::ERROR_NONE) {
                // read return values
                RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
                output = reader.Number<uint32_t>();
                param1 = reader.Text();
            }

            return output;
        }

        uint32_t Pause(const string& param0, string& /* out */ param1) override
        {
            IPCMessage newMessage(BaseClass::Message(6));

            // write parameters
            RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
            writer.Text(param0);

            // invoke the method handler
            uint32_t output{};
            if ((output = ProxyStub::UnknownProxyType<Exchange::ISystemAudioPlayer>::Invoke(newMessage)) == Core::ERROR_NONE) {
                // read return values
                RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
                output = reader.Number<uint32_t>();
                param1 = reader.Text();
            }

            return output;
        }

        uint32_t Resume(const string& param0, string& /* out */ param1) override
        {
            IPCMessage newMessage(BaseClass::Message(7));

            // write parameters
            RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
            writer.Text(param0);

            // invoke the method handler
            uint32_t output{};
            if ((output = ProxyStub::UnknownProxyType<Exchange::ISystemAudioPlayer>::Invoke(newMessage)) == Core::ERROR_NONE) {
                // read return values
                RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
                output = reader.Number<uint32_t>();
                param1 = reader.Text();
            }

            return output;
        }

        uint32_t Stop(const string& param0, string& /* out */ param1) override
        {
            IPCMessage newMessage(BaseClass::Message(8));

            // write parameters
            RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
            writer.Text(param0);

            // invoke the method handler
            uint32_t output{};
            if ((output = ProxyStub::UnknownProxyType<Exchange::ISystemAudioPlayer>::Invoke(newMessage)) == Core::ERROR_NONE) {
                // read return values
                RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
                output = reader.Number<uint32_t>();
                param1 = reader.Text();
            }

            return output;
        }

        uint32_t Close(const string& param0, string& /* out */ param1) override
        {
            IPCMessage newMessage(BaseClass::Message(9));

            // write parameters
            RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
            writer.Text(param0);

            // invoke the method handler
            uint32_t output{};
            if ((output = ProxyStub::UnknownProxyType<Exchange::ISystemAudioPlayer>::Invoke(newMessage)) == Core::ERROR_NONE) {
                // read return values
                RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
                output = reader.Number<uint32_t>();
                param1 = reader.Text();
            }

            return output;
        }

        uint32_t SetMixerLevels(const string& param0, string& /* out */ param1) override
        {
            IPCMessage newMessage(BaseClass::Message(10));

            // write parameters
            RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
            writer.Text(param0);

            // invoke the method handler
            uint32_t output{};
            if ((output = ProxyStub::UnknownProxyType<Exchange::ISystemAudioPlayer>::Invoke(newMessage)) == Core::ERROR_NONE) {
                // read return values
                RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
                output = reader.Number<uint32_t>();
                param1 = reader.Text();
            }

            return output;
        }

        uint32_t SetSmartVolControl(const string& param0, string& /* out */ param1) override
        {
            IPCMessage newMessage(BaseClass::Message(11));

            // write parameters
            RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
            writer.Text(param0);

            // invoke the method handler
            uint32_t output{};
            if ((output = ProxyStub::UnknownProxyType<Exchange::ISystemAudioPlayer>::Invoke(newMessage)) == Core::ERROR_NONE) {
                // read return values
                RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
                output = reader.Number<uint32_t>();
                param1 = reader.Text();
            }

            return output;
        }

        uint32_t IsPlaying(const string& param0, string& /* out */ param1) override
        {
            IPCMessage newMessage(BaseClass::Message(12));

            // write parameters
            RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
            writer.Text(param0);

            // invoke the method handler
            uint32_t output{};
            if ((output = ProxyStub::UnknownProxyType<Exchange::ISystemAudioPlayer>::Invoke(newMessage)) == Core::ERROR_NONE) {
                // read return values
                RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
                output = reader.Number<uint32_t>();
                param1 = reader.Text();
            }

            return output;
        }

        uint32_t Config(const string& param0, string& /* out */ param1) override
        {
            IPCMessage newMessage(BaseClass::Message(13));

            // write parameters
            RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
            writer.Text(param0);

            // invoke the method handler
            uint32_t output{};
            if ((output = ProxyStub::UnknownProxyType<Exchange::ISystemAudioPlayer>::Invoke(newMessage)) == Core::ERROR_NONE) {
                // read return values
                RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
                output = reader.Number<uint32_t>();
                param1 = reader.Text();
            }

            return output;
        }

        uint32_t GetPlayerSessionId(const string& param0, string& /* out */ param1) override
        {
            IPCMessage newMessage(BaseClass::Message(14));

            // write parameters
            RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
            writer.Text(param0);

            // invoke the method handler
            uint32_t output{};
            if ((output = ProxyStub::UnknownProxyType<Exchange::ISystemAudioPlayer>::Invoke(newMessage)) == Core::ERROR_NONE) {
                // read return values
                RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
                output = reader.Number<uint32_t>();
                param1 = reader.Text();
            }

            return output;
        }
    }; // class ExchangeSystemAudioPlayerProxy

    //
    // Exchange::ISystemAudioPlayer::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void OnSAPEvents(const string&) = 0
    //

    class ExchangeSystemAudioPlayerNotificationProxy final : public ProxyStub::UnknownProxyType<Exchange::ISystemAudioPlayer::INotification> {
    public:
        ExchangeSystemAudioPlayerNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void OnSAPEvents(const string& param0) override
        {
            IPCMessage newMessage(BaseClass::Message(0));

            // write parameters
            RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
            writer.Text(param0);

            // invoke the method handler
            ProxyStub::UnknownProxyType<Exchange::ISystemAudioPlayer::INotification>::Invoke(newMessage);
        }
    }; // class ExchangeSystemAudioPlayerNotificationProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::ISystemAudioPlayer, ExchangeSystemAudioPlayerStubMethods> ExchangeSystemAudioPlayerStub;
        typedef ProxyStub::UnknownStubType<Exchange::ISystemAudioPlayer::INotification, ExchangeSystemAudioPlayerNotificationStubMethods> ExchangeSystemAudioPlayerNotificationStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::ISystemAudioPlayer, ExchangeSystemAudioPlayerProxy, ExchangeSystemAudioPlayerStub>();
                RPC::Administrator::Instance().Announce<Exchange::ISystemAudioPlayer::INotification, ExchangeSystemAudioPlayerNotificationProxy, ExchangeSystemAudioPlayerNotificationStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::ISystemAudioPlayer>();
                RPC::Administrator::Instance().Recall<Exchange::ISystemAudioPlayer::INotification>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
