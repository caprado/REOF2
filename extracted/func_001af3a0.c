/** @category: utility/array @status: complete @author: caprado */
void func_001af3a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001af3a0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001af3a8: addu.qb $zero, $sp, $s1
    func_001b2080();  // 0x1b2010                                // 0x001af3ac: jal 0x1b2010
    s0 = *(int32_t*)((gp) + -0x63b4);                           // 0x001af3b4: lw $s0, -0x63b4($gp)
    s1 = 0x2b << 16;                                            // 0x001af3b8: lui $s1, 0x2b
    goto label_0x1af3d8;                                        // 0x001af3bc: b 0x1af3d8
    s1 = s1 + -0x5770;                                          // 0x001af3c0: addiu $s1, $s1, -0x5770
label_0x1af3c4:
    v0 = g_002aa890;  // Global at 0x002aa890                   // 0x001af3c4: lw $v0, 0($s1)
    /* call function at address in v0 */                        // 0x001af3c8: jalr $v0
    /* nop */                                                   // 0x001af3cc: nop 
    s0 = s0 + -1;                                               // 0x001af3d0: addiu $s0, $s0, -1
    s1 = s1 + 4;                                                // 0x001af3d4: addiu $s1, $s1, 4
label_0x1af3d8:
    /* nop */                                                   // 0x001af3d8: nop 
    if (s0 != 0) goto label_0x1af3c4;                           // 0x001af3dc: bnez $s0, 0x1af3c4
    /* nop */                                                   // 0x001af3e0: nop 
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001af3e8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001af3ec: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001af3f0: jr $ra
    sp = sp + 0x30;                                             // 0x001af3f4: addiu $sp, $sp, 0x30
}