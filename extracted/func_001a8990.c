void func_001a8990() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a8990: addiu $sp, $sp, -0x10
    thunk_func_001ac100();  // 0x1ac140                          // 0x001a8998: jal 0x1ac140
    a0 = 1;                                                     // 0x001a899c: addiu $a0, $zero, 1
    at = 0x29 << 16;                                            // 0x001a89a0: lui $at, 0x29
    v1 = g_0028ffcc;  // Global at 0x0028ffcc                   // 0x001a89a4: lw $v1, -0x34($at)
    at = 0x29 << 16;                                            // 0x001a89a8: lui $at, 0x29
    v0 = g_0028ffc4;  // Global at 0x0028ffc4                   // 0x001a89ac: lw $v0, -0x3c($at)
    at = (v0 < v1) ? 1 : 0;                                     // 0x001a89b0: slt $at, $v0, $v1
    if (at != 0) goto label_0x1a8a18;                           // 0x001a89b4: bnez $at, 0x1a8a18
    at = 0x1200 << 16;                                          // 0x001a89b8: lui $at, 0x1200
    at = 0x29 << 16;                                            // 0x001a89c4: lui $at, 0x29
    v0 = v0 & 1;                                                // 0x001a89c8: andi $v0, $v0, 1
    func_001a8990();  // 0x1a8960                                // 0x001a89d4: jal 0x1a8960
    g_0028ffbc = v0;  // Global at 0x0028ffbc                   // 0x001a89d8: sw $v0, -0x44($at)
label_0x1a89dc:
    v0 = *(int32_t*)((gp) + -0x63f4);                           // 0x001a89dc: lw $v0, -0x63f4($gp)
    if (v0 == 0) goto label_0x1a89f8;                           // 0x001a89e0: beqz $v0, 0x1a89f8
    func_0015f738();  // 0x15f710                                // 0x001a89e8: jal 0x15f710
    /* nop */                                                   // 0x001a89ec: nop 
    goto label_0x1a8a00;                                        // 0x001a89f0: b 0x1a8a00
    /* nop */                                                   // 0x001a89f4: nop 
label_0x1a89f8:
    func_00113130();  // 0x113098                                // 0x001a89f8: jal 0x113098
    /* nop */                                                   // 0x001a89fc: nop 
label_0x1a8a00:
    at = 0x29 << 16;                                            // 0x001a8a00: lui $at, 0x29
    v1 = g_0028ffd0;  // Global at 0x0028ffd0                   // 0x001a8a04: lw $v1, -0x30($at)
    if (v1 != 0) goto label_0x1a89dc;                           // 0x001a8a08: bnez $v1, 0x1a89dc
    /* nop */                                                   // 0x001a8a0c: nop 
    goto label_0x1a8a48;                                        // 0x001a8a10: b 0x1a8a48
label_0x1a8a18:
    func_001a8990();  // 0x1a8960                                // 0x001a8a18: jal 0x1a8960
    /* nop */                                                   // 0x001a8a1c: nop 
    v0 = *(int32_t*)((gp) + -0x63f4);                           // 0x001a8a20: lw $v0, -0x63f4($gp)
    if (v0 == 0) goto label_0x1a8a3c;                           // 0x001a8a24: beqz $v0, 0x1a8a3c
    func_0015f738();  // 0x15f710                                // 0x001a8a2c: jal 0x15f710
    /* nop */                                                   // 0x001a8a30: nop 
    goto label_0x1a8a44;                                        // 0x001a8a34: b 0x1a8a44
    /* nop */                                                   // 0x001a8a38: nop 
label_0x1a8a3c:
    func_00113130();  // 0x113098                                // 0x001a8a3c: jal 0x113098
    /* nop */                                                   // 0x001a8a40: nop 
label_0x1a8a44:
label_0x1a8a48:
    return;                                                     // 0x001a8a48: jr $ra
    sp = sp + 0x10;                                             // 0x001a8a4c: addiu $sp, $sp, 0x10
}