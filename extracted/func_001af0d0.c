void func_001af0d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001af0d0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001af0d8: addu.qb $zero, $sp, $s1
    s0 = 0x2b << 16;                                            // 0x001af0e4: lui $s0, 0x2b
    goto label_0x1af104;                                        // 0x001af0e8: b 0x1af104
    s0 = s0 + -0x5740;                                          // 0x001af0ec: addiu $s0, $s0, -0x5740
label_0x1af0f0:
    v0 = g_002aa8c0;  // Global at 0x002aa8c0                   // 0x001af0f0: lw $v0, 0($s0)
    if (v0 == a0) goto label_0x1af114;                          // 0x001af0f4: beq $v0, $a0, 0x1af114
    v0 = 8;                                                     // 0x001af0f8: addiu $v0, $zero, 8
    s1 = s1 + 1;                                                // 0x001af0fc: addiu $s1, $s1, 1
    s0 = s0 + 8;                                                // 0x001af100: addiu $s0, $s0, 8
label_0x1af104:
    v0 = (s1 < 8) ? 1 : 0;                                      // 0x001af104: slti $v0, $s1, 8
    if (v0 != 0) goto label_0x1af0f0;                           // 0x001af108: bnez $v0, 0x1af0f0
    /* nop */                                                   // 0x001af10c: nop 
    v0 = 8;                                                     // 0x001af110: addiu $v0, $zero, 8
label_0x1af114:
    if (s1 != v0) goto label_0x1af138;                          // 0x001af114: bne $s1, $v0, 0x1af138
    /* nop */                                                   // 0x001af118: nop 
label_0x1af11c:
    /* nop */                                                   // 0x001af11c: nop 
    /* nop */                                                   // 0x001af120: nop 
    /* nop */                                                   // 0x001af124: nop 
    /* nop */                                                   // 0x001af128: nop 
    /* nop */                                                   // 0x001af12c: nop 
    goto label_0x1af11c;                                        // 0x001af130: b 0x1af11c
    /* nop */                                                   // 0x001af134: nop 
label_0x1af138:
    func_0018da90();  // 0x18da80                                // 0x001af138: jal 0x18da80
    /* nop */                                                   // 0x001af13c: nop 
    goto label_0x1af15c;                                        // 0x001af140: b 0x1af15c
    v1 = (s1 < 8) ? 1 : 0;                                      // 0x001af144: slti $v1, $s1, 8
label_0x1af148:
    g_002aa8c8 = 0;  // Global at 0x002aa8c8                    // 0x001af148: sw $zero, 0($s0)
    s1 = s1 + 1;                                                // 0x001af14c: addiu $s1, $s1, 1
    g_002aa8cc = 0;  // Global at 0x002aa8cc                    // 0x001af150: sw $zero, 4($s0)
    s0 = s0 + 8;                                                // 0x001af154: addiu $s0, $s0, 8
    v1 = (s1 < 8) ? 1 : 0;                                      // 0x001af158: slti $v1, $s1, 8
label_0x1af15c:
    if (v1 != 0) goto label_0x1af148;                           // 0x001af15c: bnez $v1, 0x1af148
    /* nop */                                                   // 0x001af160: nop 
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001af168: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001af16c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001af170: jr $ra
    sp = sp + 0x30;                                             // 0x001af174: addiu $sp, $sp, 0x30
}