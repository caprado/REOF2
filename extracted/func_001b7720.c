/** @category: game/resource @status: complete @author: caprado */
void func_001b7720() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001b7720: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b7730: addu.qb $zero, $sp, $s1
    v0 = 0x30 << 16;                                            // 0x001b7734: lui $v0, 0x30
    v0 = v0 + 0x7d90;                                           // 0x001b773c: addiu $v0, $v0, 0x7d90
    v1 = v1 << 5;                                               // 0x001b7740: sll $v1, $v1, 5
    s0 = v0 + v1;                                               // 0x001b7744: addu $s0, $v0, $v1
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x001b7748: lw $v0, 0x14($s0)
    if (v0 == 0) goto label_0x1b775c;                           // 0x001b774c: beqz $v0, 0x1b775c
    /* call function at address in v0 */                        // 0x001b7754: jalr $v0
    /* nop */                                                   // 0x001b7758: nop 
label_0x1b775c:
    func_00107c70();  // 107c70                                // 0x001b7764: jal 0x107c70
    a2 = 0x20;                                                  // 0x001b7768: addiu $a2, $zero, 0x20
    *(uint32_t*)((s0) + 4) = s1;                                // 0x001b776c: sw $s1, 4($s0)
    v1 = 4;                                                     // 0x001b7770: addiu $v1, $zero, 4
    *(uint16_t*)(s0) = v1;                                      // 0x001b7774: sh $v1, 0($s0)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b777c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b7780: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b7784: jr $ra
    sp = sp + 0x30;                                             // 0x001b7788: addiu $sp, $sp, 0x30
}