void func_001929a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001929a0: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001929ac: addu.qb $zero, $sp, $s1
    func_0018db00();  // 18db00                                // 0x001929c0: jal 0x18db00
    *(uint32_t*)((gp) + -0x64dc) = v0;                          // 0x001929c8: sw $v0, -0x64dc($gp)
    v1 = *(int32_t*)((v0) + 0x10);                              // 0x001929d0: lw $v1, 0x10($v0)
    v0 = *(int32_t*)((gp) + -0x64dc);                           // 0x001929d8: lw $v0, -0x64dc($gp)
    *(uint32_t*)((gp) + -0x7d70) = s0;                          // 0x001929dc: sw $s0, -0x7d70($gp)
    func_00192ab0();  // 192ab0                                // 0x001929e0: jal 0x192ab0
    s0 = v1 + v0;                                               // 0x001929e4: addu $s0, $v1, $v0
    if (v0 == 0) goto label_0x1929fc;                           // 0x001929e8: beqz $v0, 0x1929fc
    func_00192a20();  // 192a20                                // 0x001929f4: jal 0x192a20
label_0x1929fc:
    v0 = 1;                                                     // 0x00192a00: addiu $v0, $zero, 1
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x00192a04: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00192a08: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00192a0c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00192a10: jr $ra
    sp = sp + 0x40;                                             // 0x00192a14: addiu $sp, $sp, 0x40
}