void func_001d9040() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x170;                                           // 0x001d9040: addiu $sp, $sp, -0x170
    a1 = 0x24 << 16;                                            // 0x001d9044: lui $a1, 0x24
    at = 0x31 << 16;                                            // 0x001d904c: lui $at, 0x31
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d9050: subu.qb $zero, $sp, $s5
    v0 = 0x10 << 16;                                            // 0x001d9054: lui $v0, 0x10
    a0 = sp + 0x70;                                             // 0x001d905c: addiu $a0, $sp, 0x70
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d9060: dpa.w.ph $ac0, $sp, $s3
    a1 = &str_002478b0;  // "data\\rom\\scene\\pit_tex\\select.tex" // 0x001d9064: addiu $a1, $a1, 0x78b0
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d906c: addu.qb $zero, $sp, $s1
    s5 = g_003137fc;  // Global at 0x003137fc                   // 0x001d9074: lw $s5, 0x37fc($at)
    func_0010ac68();  // 10ac68                                // 0x001d9078: jal 0x10ac68
    s4 = s5 + v0;                                               // 0x001d907c: addu $s4, $s5, $v0
    a0 = sp + 0x70;                                             // 0x001d9080: addiu $a0, $sp, 0x70
    a2 = 1;                                                     // 0x001d9088: addiu $a2, $zero, 1
    func_001d3390();  // 1d3390                                // 0x001d908c: jal 0x1d3390
    if (v0 == 0) goto label_0x1d9100;                           // 0x001d9094: beqz $v0, 0x1d9100
    /* nop */                                                   // 0x001d9098: nop 
    s2 = *(int32_t*)((s5) + 4);                                 // 0x001d909c: lw $s2, 4($s5)
    s1 = 1;                                                     // 0x001d90a0: addiu $s1, $zero, 1
    at = (s2 < 5) ? 1 : 0;                                      // 0x001d90a4: slti $at, $s2, 5
    if (at != 0) goto label_0x1d90b4;                           // 0x001d90a8: bnez $at, 0x1d90b4
    s3 = s5 + 8;                                                // 0x001d90ac: addiu $s3, $s5, 8
    s2 = 4;                                                     // 0x001d90b0: addiu $s2, $zero, 4
label_0x1d90b4:
    goto label_0x1d90f4;                                        // 0x001d90b4: b 0x1d90f4
label_0x1d90bc:
    v0 = *(int32_t*)(s3);                                       // 0x001d90bc: lw $v0, 0($s3)
    a0 = s5 + v0;                                               // 0x001d90c4: addu $a0, $s5, $v0
    func_001aee20();  // 1aee20                                // 0x001d90c8: jal 0x1aee20
    s3 = s3 + 8;                                                // 0x001d90cc: addiu $s3, $s3, 8
    v0 = s2 + -1;                                               // 0x001d90d0: addiu $v0, $s2, -1
    if (s0 != v0) goto label_0x1d90e4;                          // 0x001d90d4: bne $s0, $v0, 0x1d90e4
    s1 = 0xa;                                                   // 0x001d90dc: addiu $s1, $zero, 0xa
label_0x1d90e4:
    func_001d3600();  // 1d3600                                // 0x001d90e8: jal 0x1d3600
    s1 = a0 + 1;                                                // 0x001d90ec: addiu $s1, $a0, 1
    s0 = s0 + 1;                                                // 0x001d90f0: addiu $s0, $s0, 1
label_0x1d90f4:
    v1 = (s0 < s2) ? 1 : 0;                                     // 0x001d90f4: slt $v1, $s0, $s2
    if (v1 != 0) goto label_0x1d90bc;                           // 0x001d90f8: bnez $v1, 0x1d90bc
    /* nop */                                                   // 0x001d90fc: nop 
label_0x1d9100:
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001d9104: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d9108: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d9110: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d9114: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d9118: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d911c: jr $ra
    sp = sp + 0x170;                                            // 0x001d9120: addiu $sp, $sp, 0x170
}