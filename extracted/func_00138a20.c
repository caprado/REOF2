void func_00138a20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00138a20: addiu $sp, $sp, -0x50
    ReferThreadStatus();  // 0x1141d0                           // 0x00138a28: jal 0x1141d0
    /* nop */                                                   // 0x00138a2c: nop 
    func_00117978();  // 0x1178e0                                // 0x00138a34: jal 0x1178e0
    ReferThreadStatus();  // 0x1141d0                           // 0x00138a3c: jal 0x1141d0
    /* nop */                                                   // 0x00138a40: nop 
    a0 = sp + 0x20;                                             // 0x00138a44: addiu $a0, $sp, 0x20
    func_00117978();  // 0x1178e0                                // 0x00138a48: jal 0x1178e0
    a0 = 0x20 << 16;                                            // 0x00138a50: lui $a0, 0x20
    v0 = 0x20 << 16;                                            // 0x00138a54: lui $v0, 0x20
    a2 = 0x14 << 16;                                            // 0x00138a58: lui $a2, 0x14
    a1 = g_00202a14;  // Global at 0x00202a14                   // 0x00138a5c: lw $a1, 0x2a14($v0)
    a3 = 0x20 << 16;                                            // 0x00138a60: lui $a3, 0x20
    a2 = a2 + -0x76b0;                                          // 0x00138a64: addiu $a2, $a2, -0x76b0
    a3 = a3 + 0x2ee0;                                           // 0x00138a68: addiu $a3, $a3, 0x2ee0
    func_00117a48();  // 0x117978                                // 0x00138a78: jal 0x117978
    a0 = a0 + 0x2e98;                                           // 0x00138a7c: addiu $a0, $a0, 0x2e98
    v0 = 0x20 << 16;                                            // 0x00138a80: lui $v0, 0x20
    v0 = v0 + 0x2a18;                                           // 0x00138a84: addiu $v0, $v0, 0x2a18
    v1 = 1;                                                     // 0x00138a88: addiu $v1, $zero, 1
    g_00202a18 = v1;  // Global at 0x00202a18                   // 0x00138a8c: sw $v1, 0($v0)
    func_00117dd0();  // 0x117d90                                // 0x00138a90: jal 0x117d90
    return;                                                     // 0x00138aa0: jr $ra
    sp = sp + 0x50;                                             // 0x00138aa4: addiu $sp, $sp, 0x50
}