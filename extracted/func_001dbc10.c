void func_001dbc10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001dbc10: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001dbc18: addu.qb $zero, $sp, $s1
    func_005943a0();  // 0x5943a0                               // 0x001dbc1c: jal 0x5943a0
    at = 0x31 << 16;                                            // 0x001dbc24: lui $at, 0x31
    s1 = g_003137fc;  // Global at 0x003137fc                   // 0x001dbc2c: lw $s1, 0x37fc($at)
label_0x1dbc30:
    func_001d3d20();  // 0x1d3cb0                                // 0x001dbc30: jal 0x1d3cb0
    a0 = s0 + 0x4000;                                           // 0x001dbc34: addiu $a0, $s0, 0x4000
    if (v0 != 0) goto label_0x1dbc78;                           // 0x001dbc38: bnez $v0, 0x1dbc78
    /* nop */                                                   // 0x001dbc3c: nop 
    v0 = 0x22 << 16;                                            // 0x001dbc40: lui $v0, 0x22
    v1 = s0 << 2;                                               // 0x001dbc44: sll $v1, $s0, 2
    v0 = v0 + -0x3f0;                                           // 0x001dbc48: addiu $v0, $v0, -0x3f0
    v0 = v0 + v1;                                               // 0x001dbc50: addu $v0, $v0, $v1
    a0 = g_0021fc10;  // Global at 0x0021fc10                   // 0x001dbc58: lw $a0, 0($v0)
    v0 = 1 << 16;                                               // 0x001dbc5c: lui $v0, 1
    func_001d33e0();  // 0x1d3390                                // 0x001dbc60: jal 0x1d3390
    a2 = v0 | 1;                                                // 0x001dbc64: ori $a2, $v0, 1
    if (v0 == 0) goto label_0x1dbc78;                           // 0x001dbc68: beqz $v0, 0x1dbc78
    a0 = s0 + 0x4000;                                           // 0x001dbc6c: addiu $a0, $s0, 0x4000
    func_001d36b0();  // 0x1d3600                                // 0x001dbc70: jal 0x1d3600
label_0x1dbc78:
    s0 = s0 + 1;                                                // 0x001dbc78: addiu $s0, $s0, 1
    v1 = (s0 < 0x18) ? 1 : 0;                                   // 0x001dbc7c: slti $v1, $s0, 0x18
    if (v1 != 0) goto label_0x1dbc30;                           // 0x001dbc80: bnez $v1, 0x1dbc30
    /* nop */                                                   // 0x001dbc84: nop 
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001dbc8c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001dbc90: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001dbc94: jr $ra
    sp = sp + 0x30;                                             // 0x001dbc98: addiu $sp, $sp, 0x30
}