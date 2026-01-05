/** @category game/system @status complete @author caprado */
void func_001ba8f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ba8f0: addiu $sp, $sp, -0x10
    func_001b0430();  // 1b0430                                // 0x001ba8f8: jal 0x1b0430
    /* nop */                                                   // 0x001ba8fc: nop 
    a0 = 0x31 << 16;                                            // 0x001ba900: lui $a0, 0x31
    func_001b06a0();  // 1b06a0                                // 0x001ba904: jal 0x1b06a0
    a0 = a0 + 0x36e0;                                           // 0x001ba908: addiu $a0, $a0, 0x36e0
    a0 = 0x31 << 16;                                            // 0x001ba90c: lui $a0, 0x31
    func_001b06a0();  // 1b06a0                                // 0x001ba910: jal 0x1b06a0
    a0 = a0 + 0x3710;                                           // 0x001ba914: addiu $a0, $a0, 0x3710
    a0 = 0x31 << 16;                                            // 0x001ba918: lui $a0, 0x31
    func_001b06a0();  // 1b06a0                                // 0x001ba91c: jal 0x1b06a0
    a0 = a0 + 0x3740;                                           // 0x001ba920: addiu $a0, $a0, 0x3740
    a0 = 0x31 << 16;                                            // 0x001ba924: lui $a0, 0x31
    func_001b06a0();  // 1b06a0                                // 0x001ba928: jal 0x1b06a0
    a0 = a0 + 0x3770;                                           // 0x001ba92c: addiu $a0, $a0, 0x3770
    func_001b0ae0();  // 1b0ae0                                // 0x001ba930: jal 0x1b0ae0
    /* nop */                                                   // 0x001ba934: nop 
    return;                                                     // 0x001ba93c: jr $ra
    sp = sp + 0x10;                                             // 0x001ba940: addiu $sp, $sp, 0x10
}