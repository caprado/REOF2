void func_001af010() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_00198ac0();  // Tail call                        // 0x001af010: j 0x198aa0
    /* nop */                                                   // 0x001af014: nop 
    /* nop */                                                   // 0x001af018: nop 
    /* nop */                                                   // 0x001af01c: nop 
    sp = sp + -0x40;                                            // 0x001af020: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001af02c: addu.qb $zero, $sp, $s1
    s0 = 0x2b << 16;                                            // 0x001af03c: lui $s0, 0x2b
    goto label_0x1af05c;                                        // 0x001af040: b 0x1af05c
    s0 = s0 + -0x5740;                                          // 0x001af044: addiu $s0, $s0, -0x5740
label_0x1af048:
    v0 = g_002aa8c0;  // Global at 0x002aa8c0                   // 0x001af048: lw $v0, 0($s0)
    if (v0 == 0) goto label_0x1af06c;                           // 0x001af04c: beqz $v0, 0x1af06c
    v0 = 8;                                                     // 0x001af050: addiu $v0, $zero, 8
    s1 = s1 + 1;                                                // 0x001af054: addiu $s1, $s1, 1
    s0 = s0 + 8;                                                // 0x001af058: addiu $s0, $s0, 8
label_0x1af05c:
    v0 = (s1 < 8) ? 1 : 0;                                      // 0x001af05c: slti $v0, $s1, 8
    if (v0 != 0) goto label_0x1af048;                           // 0x001af060: bnez $v0, 0x1af048
    /* nop */                                                   // 0x001af064: nop 
    v0 = 8;                                                     // 0x001af068: addiu $v0, $zero, 8
label_0x1af06c:
    if (s1 != v0) goto label_0x1af090;                          // 0x001af06c: bne $s1, $v0, 0x1af090
label_0x1af074:
    /* nop */                                                   // 0x001af074: nop 
    /* nop */                                                   // 0x001af078: nop 
    /* nop */                                                   // 0x001af07c: nop 
    /* nop */                                                   // 0x001af080: nop 
    /* nop */                                                   // 0x001af084: nop 
    goto label_0x1af074;                                        // 0x001af088: b 0x1af074
    /* nop */                                                   // 0x001af08c: nop 
label_0x1af090:
    func_0018da60();  // 18da60                                // 0x001af090: jal 0x18da60
    /* nop */                                                   // 0x001af094: nop 
    v1 = *(int32_t*)((gp) + -0x63c8);                           // 0x001af098: lw $v1, -0x63c8($gp)
    at = (v1 < s1) ? 1 : 0;                                     // 0x001af09c: slt $at, $v1, $s1
    if (at == 0) goto label_0x1af0ac;                           // 0x001af0a0: beqz $at, 0x1af0ac
    /* nop */                                                   // 0x001af0a4: nop 
    *(uint32_t*)((gp) + -0x63c8) = s1;                          // 0x001af0a8: sw $s1, -0x63c8($gp)
label_0x1af0ac:
    g_002aa8c8 = s2;  // Global at 0x002aa8c8                   // 0x001af0ac: sw $s2, 0($s0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001af0b4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001af0b8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001af0bc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001af0c0: jr $ra
    sp = sp + 0x40;                                             // 0x001af0c4: addiu $sp, $sp, 0x40
}