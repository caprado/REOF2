void func_001ced80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a3 = 0x32 << 16;                                            // 0x001ced84: lui $a3, 0x32
    sp = sp + -0x20;                                            // 0x001ced88: addiu $sp, $sp, -0x20
    a0 = 0x32 << 16;                                            // 0x001ced8c: lui $a0, 0x32
    a3 = a3 + 0x5980;                                           // 0x001ced90: addiu $a3, $a3, 0x5980
    t0 = 0x40;                                                  // 0x001ced94: addiu $t0, $zero, 0x40
    a0 = a0 + 0x59c0;                                           // 0x001ceda0: addiu $a0, $a0, 0x59c0
    func_001176a8();  // 1176a8                                // 0x001cedb0: jal 0x1176a8
    if (v0 >= 0) goto label_0x1cedc4;                           // 0x001cedb8: bgez $v0, 0x1cedc4
    /* nop */                                                   // 0x001cedbc: nop 
    v0 = -1;                                                    // 0x001cedc0: addiu $v0, $zero, -1
label_0x1cedc4:
    return;                                                     // 0x001cedc8: jr $ra
    sp = sp + 0x20;                                             // 0x001cedcc: addiu $sp, $sp, 0x20
}