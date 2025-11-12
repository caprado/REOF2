void func_001a1aa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001a1aa0: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001a1aa8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a1ab0: addu.qb $zero, $sp, $s1
    func_001a2740();  // 0x1a2720                                // 0x001a1ab8: jal 0x1a2720
    v0 = v0 << 2;                                               // 0x001a1ac8: sll $v0, $v0, 2
    goto label_0x1a1afc;                                        // 0x001a1acc: b 0x1a1afc
    s1 = v0 + 0x20;                                             // 0x001a1ad0: addiu $s1, $v0, 0x20
label_0x1a1ad4:
    func_001a1a60();  // 0x1a1a10                                // 0x001a1ad4: jal 0x1a1a10
    v1 = *(int32_t*)((v0) + 4);                                 // 0x001a1adc: lw $v1, 4($v0)
    s1 = s1 + 8;                                                // 0x001a1ae4: addiu $s1, $s1, 8
    v0 = v1 << 3;                                               // 0x001a1ae8: sll $v0, $v1, 3
    func_001a1c30();  // 0x1a1b30                                // 0x001a1aec: jal 0x1a1b30
    s1 = s1 + v0;                                               // 0x001a1af0: addu $s1, $s1, $v0
    s1 = s1 + v0;                                               // 0x001a1af4: addu $s1, $s1, $v0
    s3 = s3 + 1;                                                // 0x001a1af8: addiu $s3, $s3, 1
label_0x1a1afc:
    v0 = (s3 < s2) ? 1 : 0;                                     // 0x001a1afc: slt $v0, $s3, $s2
    if (v0 != 0) goto label_0x1a1ad4;                           // 0x001a1b00: bnez $v0, 0x1a1ad4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001a1b14: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a1b18: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a1b1c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a1b20: jr $ra
    sp = sp + 0x50;                                             // 0x001a1b24: addiu $sp, $sp, 0x50
}