/** @category: game/init @status: complete @author: caprado */
void func_001ba960() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ba960: addiu $sp, $sp, -0x10
    func_001ac150();  // 1ac150                                // 0x001ba968: jal 0x1ac150
    /* nop */                                                   // 0x001ba96c: nop 
    func_001ac020();  // 1ac020                                // 0x001ba970: jal 0x1ac020
    /* nop */                                                   // 0x001ba974: nop 
    func_001b7f80();  // 1b7f80                                // 0x001ba978: jal 0x1b7f80
    func_001ba9c0();  // 1ba9c0                                // 0x001ba980: jal 0x1ba9c0
    /* nop */                                                   // 0x001ba984: nop 
    func_001b4570();  // 1b4570                                // 0x001ba988: jal 0x1b4570
    /* nop */                                                   // 0x001ba98c: nop 
    func_001b3440();  // 1b3440                                // 0x001ba990: jal 0x1b3440
    func_001b3430();  // 1b3430                                // 0x001ba998: jal 0x1b3430
    /* nop */                                                   // 0x001ba99c: nop 
    func_001bb710();  // 1bb710                                // 0x001ba9a0: jal 0x1bb710
    /* nop */                                                   // 0x001ba9a4: nop 
    return;                                                     // 0x001ba9ac: jr $ra
    sp = sp + 0x10;                                             // 0x001ba9b0: addiu $sp, $sp, 0x10
}