void func_001b76c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001b76c0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b76d0: addu.qb $zero, $sp, $s1
    v0 = 0x30 << 16;                                            // 0x001b76d4: lui $v0, 0x30
    v0 = v0 + 0x7d90;                                           // 0x001b76dc: addiu $v0, $v0, 0x7d90
    v1 = v1 << 5;                                               // 0x001b76e0: sll $v1, $v1, 5
    s0 = v0 + v1;                                               // 0x001b76e8: addu $s0, $v0, $v1
    a2 = 0x20;                                                  // 0x001b76f0: addiu $a2, $zero, 0x20
    func_00107d30();  // 0x107c70                                // 0x001b76f4: jal 0x107c70
    v1 = 0xc;                                                   // 0x001b76fc: addiu $v1, $zero, 0xc
    *(uint16_t*)(s0) = v1;                                      // 0x001b7700: sh $v1, 0($s0)
    *(uint32_t*)((s0) + 4) = s1;                                // 0x001b7704: sw $s1, 4($s0)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b770c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b7710: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b7714: jr $ra
    sp = sp + 0x30;                                             // 0x001b7718: addiu $sp, $sp, 0x30
}