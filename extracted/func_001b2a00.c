void func_001b2a00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b2a00: addiu $sp, $sp, -0x10
    v1 = 0x49 << 16;                                            // 0x001b2a04: lui $v1, 0x49
    at = 0x49 << 16;                                            // 0x001b2a0c: lui $at, 0x49
    a1 = g_00490c1c;  // Global at 0x00490c1c                   // 0x001b2a10: lhu $a1, 0xc1c($at)
    v1 = v1 + 0x810;                                            // 0x001b2a14: addiu $v1, $v1, 0x810
    at = 0x31 << 16;                                            // 0x001b2a18: lui $at, 0x31
    a0 = g_003137bc;  // Global at 0x003137bc                   // 0x001b2a1c: lhu $a0, 0x37bc($at)
    a0 = a0 << 1;                                               // 0x001b2a20: sll $a0, $a0, 1
    v1 = v1 + a0;                                               // 0x001b2a24: addu $v1, $v1, $a0
    v1 = g_00490810;  // Global at 0x00490810                   // 0x001b2a28: lhu $v1, 0($v1)
    if (v1 == a1) goto label_0x1b2a70;                          // 0x001b2a2c: beq $v1, $a1, 0x1b2a70
    /* nop */                                                   // 0x001b2a30: nop 
    if (a1 == 0) goto label_0x1b2a44;                           // 0x001b2a34: beqz $a1, 0x1b2a44
    /* nop */                                                   // 0x001b2a38: nop 
    func_001b1bd0();  // 0x1b1b10                                // 0x001b2a3c: jal 0x1b1b10
    /* nop */                                                   // 0x001b2a40: nop 
label_0x1b2a44:
    at = 0x31 << 16;                                            // 0x001b2a44: lui $at, 0x31
    v0 = 0x49 << 16;                                            // 0x001b2a48: lui $v0, 0x49
    v1 = g_003137bc;  // Global at 0x003137bc                   // 0x001b2a4c: lhu $v1, 0x37bc($at)
    v0 = v0 + 0x810;                                            // 0x001b2a50: addiu $v0, $v0, 0x810
    v1 = v1 << 1;                                               // 0x001b2a54: sll $v1, $v1, 1
    at = 0x49 << 16;                                            // 0x001b2a58: lui $at, 0x49
    v1 = v0 + v1;                                               // 0x001b2a5c: addu $v1, $v0, $v1
    v0 = g_00490810;  // Global at 0x00490810                   // 0x001b2a60: lhu $v0, 0($v1)
    g_00490c1c = v0;  // Global at 0x00490c1c                   // 0x001b2a64: sh $v0, 0xc1c($at)
    func_001d89c0();  // 0x1d8950                                // 0x001b2a68: jal 0x1d8950
    a0 = g_00490810;  // Global at 0x00490810                   // 0x001b2a6c: lhu $a0, 0($v1)
label_0x1b2a70:
    return;                                                     // 0x001b2a74: jr $ra
    sp = sp + 0x10;                                             // 0x001b2a78: addiu $sp, $sp, 0x10
}