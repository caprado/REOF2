void func_001c6be0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001c6be0: addiu $sp, $sp, -0x50
    at = 0 | 0x84d0;                                            // 0x001c6be4: ori $at, $zero, 0x84d0
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c6bec: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c6bf8: addu.qb $zero, $sp, $s1
    s2 = *(int32_t*)((a0) + 0xe8);                              // 0x001c6c00: lw $s2, 0xe8($a0)
    s1 = s2 + 0x2030;                                           // 0x001c6c04: addiu $s1, $s2, 0x2030
    a0 = s2 + 0x10;                                             // 0x001c6c08: addiu $a0, $s2, 0x10
    func_001c6960();  // 0x1c6860                                // 0x001c6c0c: jal 0x1c6860
    s0 = s1 + at;                                               // 0x001c6c10: addu $s0, $s1, $at
    a1 = *(int32_t*)((s3) + 0x20);                              // 0x001c6c14: lw $a1, 0x20($s3)
    func_001c6af0();  // 0x1c6ab0                                // 0x001c6c18: jal 0x1c6ab0
    a0 = s2 + 0x30;                                             // 0x001c6c1c: addiu $a0, $s2, 0x30
    a2 = *(int32_t*)((s3) + 0x20);                              // 0x001c6c20: lw $a2, 0x20($s3)
    func_001c7170();  // 0x1c7050                                // 0x001c6c28: jal 0x1c7050
    a1 = 0x2030;                                                // 0x001c6c2c: addiu $a1, $zero, 0x2030
    func_001c69d0();  // 0x1c6960                                // 0x001c6c30: jal 0x1c6960
    a2 = *(int32_t*)((s3) + 0x20);                              // 0x001c6c38: lw $a2, 0x20($s3)
    func_001c7170();  // 0x1c7050                                // 0x001c6c40: jal 0x1c7050
    a1 = 0 | 0x84d0;                                            // 0x001c6c44: ori $a1, $zero, 0x84d0
    func_001c6ab0();  // 0x1c6a10                                // 0x001c6c48: jal 0x1c6a10
    a2 = *(int32_t*)((s3) + 0x20);                              // 0x001c6c50: lw $a2, 0x20($s3)
    v0 = 1 << 16;                                               // 0x001c6c54: lui $v0, 1
    func_001c7170();  // 0x1c7050                                // 0x001c6c5c: jal 0x1c7050
    a1 = v0 | 0x50;                                             // 0x001c6c60: ori $a1, $v0, 0x50
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c6c6c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c6c70: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c6c74: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c6c78: jr $ra
    sp = sp + 0x50;                                             // 0x001c6c7c: addiu $sp, $sp, 0x50
}