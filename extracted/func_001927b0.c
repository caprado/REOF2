void func_001927b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001927b0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001927b8: addu.qb $zero, $sp, $s1
    func_0018db00();  // 18db00                                // 0x001927c8: jal 0x18db00
    *(uint32_t*)((gp) + -0x64dc) = v0;                          // 0x001927d0: sw $v0, -0x64dc($gp)
    v1 = *(int32_t*)((v0) + 0x10);                              // 0x001927d8: lw $v1, 0x10($v0)
    v0 = *(int32_t*)((gp) + -0x64dc);                           // 0x001927dc: lw $v0, -0x64dc($gp)
    *(uint32_t*)((gp) + -0x7d70) = s0;                          // 0x001927e0: sw $s0, -0x7d70($gp)
    func_00192810();  // 192810                                // 0x001927e4: jal 0x192810
    a1 = v1 + v0;                                               // 0x001927e8: addu $a1, $v1, $v0
    v0 = 1;                                                     // 0x001927f0: addiu $v0, $zero, 1
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001927f4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001927f8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001927fc: jr $ra
    sp = sp + 0x30;                                             // 0x00192800: addiu $sp, $sp, 0x30
}