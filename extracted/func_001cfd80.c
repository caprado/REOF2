void func_001cfd80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001cfd80: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cfd88: addu.qb $zero, $sp, $s1
    a3 = *(int32_t*)((a0) + 0xc);                               // 0x001cfd94: lw $a3, 0xc($a0)
    v0 = *(int32_t*)((a0) + 0x10);                              // 0x001cfd98: lw $v0, 0x10($a0)
    v1 = a3 + a2;                                               // 0x001cfd9c: addu $v1, $a3, $a2
    at = (v0 < v1) ? 1 : 0;                                     // 0x001cfda0: slt $at, $v0, $v1
    if (at == 0) goto label_0x1cfdbc;                           // 0x001cfda4: beqz $at, 0x1cfdbc
    func_001ce640();  // 0x1ce600                                // 0x001cfdac: jal 0x1ce600
    a0 = 4;                                                     // 0x001cfdb0: addiu $a0, $zero, 4
    goto label_0x1cfdd8;                                        // 0x001cfdb4: b 0x1cfdd8
label_0x1cfdbc:
    v0 = *(int32_t*)((s0) + 8);                                 // 0x001cfdbc: lw $v0, 8($s0)
    func_00107b68();  // 0x107ab8                                // 0x001cfdc0: jal 0x107ab8
    a0 = v0 + a3;                                               // 0x001cfdc4: addu $a0, $v0, $a3
    v1 = *(int32_t*)((s0) + 0xc);                               // 0x001cfdc8: lw $v1, 0xc($s0)
    v1 = v1 + s1;                                               // 0x001cfdcc: addu $v1, $v1, $s1
    *(uint32_t*)((s0) + 0xc) = v1;                              // 0x001cfdd0: sw $v1, 0xc($s0)
label_0x1cfdd8:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cfdd8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cfddc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cfde0: jr $ra
    sp = sp + 0x30;                                             // 0x001cfde4: addiu $sp, $sp, 0x30
}