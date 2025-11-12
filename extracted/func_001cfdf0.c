void func_001cfdf0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001cfdf0: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cfdfc: addu.qb $zero, $sp, $s1
    v0 = *(int32_t*)((a0) + 4);                                 // 0x001cfe0c: lw $v0, 4($a0)
    v1 = *(int32_t*)((a0) + 0xc);                               // 0x001cfe10: lw $v1, 0xc($a0)
    v0 = v0 + a2;                                               // 0x001cfe14: addu $v0, $v0, $a2
    at = (v1 < v0) ? 1 : 0;                                     // 0x001cfe18: slt $at, $v1, $v0
    if (at == 0) goto label_0x1cfe2c;                           // 0x001cfe1c: beqz $at, 0x1cfe2c
    func_001ce640();  // 0x1ce600                                // 0x001cfe24: jal 0x1ce600
    a0 = 3;                                                     // 0x001cfe28: addiu $a0, $zero, 3
label_0x1cfe2c:
    v1 = *(int32_t*)((s1) + 8);                                 // 0x001cfe2c: lw $v1, 8($s1)
    v0 = *(int32_t*)((s1) + 4);                                 // 0x001cfe34: lw $v0, 4($s1)
    func_00107b68();  // 0x107ab8                                // 0x001cfe3c: jal 0x107ab8
    a1 = v1 + v0;                                               // 0x001cfe40: addu $a1, $v1, $v0
    v1 = *(int32_t*)((s1) + 4);                                 // 0x001cfe44: lw $v1, 4($s1)
    v1 = v1 + s0;                                               // 0x001cfe48: addu $v1, $v1, $s0
    *(uint32_t*)((s1) + 4) = v1;                                // 0x001cfe4c: sw $v1, 4($s1)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001cfe54: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cfe58: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cfe5c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cfe60: jr $ra
    sp = sp + 0x40;                                             // 0x001cfe64: addiu $sp, $sp, 0x40
}