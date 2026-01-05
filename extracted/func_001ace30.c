void func_001ace30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001ace30: addiu $sp, $sp, -0x50
    at = 0x31 << 16;                                            // 0x001ace34: lui $at, 0x31
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001ace3c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ace48: addu.qb $zero, $sp, $s1
    s0 = g_003137fc;  // Global at 0x003137fc                   // 0x001ace58: lw $s0, 0x37fc($at)
    a2 = 0x40;                                                  // 0x001ace60: addiu $a2, $zero, 0x40
    func_00107c70();  // 107c70                                // 0x001ace64: jal 0x107c70
    v0 = 0x40;                                                  // 0x001ace6c: addiu $v0, $zero, 0x40
    a0 = s0 + 0x40;                                             // 0x001ace70: addiu $a0, $s0, 0x40
    *(uint32_t*)((s0) + 0x18) = v0;                             // 0x001ace74: sw $v0, 0x18($s0)
    func_00107ab8();  // 107ab8                                // 0x001ace80: jal 0x107ab8
    *(uint32_t*)((s0) + 0x1c) = s2;                             // 0x001ace84: sw $s2, 0x1c($s0)
    v0 = s0 + 0x40;                                             // 0x001ace88: addiu $v0, $s0, 0x40
    a1 = s3 + s2;                                               // 0x001ace8c: addu $a1, $s3, $s2
    v1 = v0 + s2;                                               // 0x001ace90: addu $v1, $v0, $s2
    v0 = -0x40;                                                 // 0x001ace98: addiu $v0, $zero, -0x40
    v1 = v1 + 0x3f;                                             // 0x001ace9c: addiu $v1, $v1, 0x3f
    a0 = v1 & v0;                                               // 0x001acea0: and $a0, $v1, $v0
    v0 = a0 - s0;                                               // 0x001acea4: subu $v0, $a0, $s0
    *(uint32_t*)((s0) + 0x20) = v0;                             // 0x001acea8: sw $v0, 0x20($s0)
    func_00107ab8();  // 107ab8                                // 0x001aceac: jal 0x107ab8
    *(uint32_t*)((s0) + 0x24) = s1;                             // 0x001aceb0: sw $s1, 0x24($s0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001acebc: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001acec0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001acec4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001acec8: jr $ra
    sp = sp + 0x50;                                             // 0x001acecc: addiu $sp, $sp, 0x50
}