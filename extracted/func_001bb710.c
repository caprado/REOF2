/** @category graphics/render @status complete @author caprado */
void func_001bb710() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001bb710: addiu $sp, $sp, -0x10
    a0 = 0x30 << 16;                                            // 0x001bb714: lui $a0, 0x30
    a0 = a0 + 0x7fe0;                                           // 0x001bb71c: addiu $a0, $a0, 0x7fe0
    func_00107c70();  // 107c70                                // 0x001bb724: jal 0x107c70
    a2 = 0x18;                                                  // 0x001bb728: addiu $a2, $zero, 0x18
    func_001bbb80();  // 1bbb80                                // 0x001bb72c: jal 0x1bbb80
    /* nop */                                                   // 0x001bb730: nop 
    return;                                                     // 0x001bb738: jr $ra
    sp = sp + 0x10;                                             // 0x001bb73c: addiu $sp, $sp, 0x10
}