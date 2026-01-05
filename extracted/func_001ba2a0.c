/** @category game/state @status complete @author caprado */
void func_001ba2a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001ba2a0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ba2a8: addu.qb $zero, $sp, $s1
    goto label_0x1ba2d8;                                        // 0x001ba2b4: b 0x1ba2d8
label_0x1ba2bc:
    v0 = g_003137a0;  // Global at 0x003137a0                   // 0x001ba2bc: lbu $v0, 0x37a0($at)
    if (v0 == 0) goto label_0x1ba2cc;                           // 0x001ba2c0: beqz $v0, 0x1ba2cc
    *(uint32_t*)((gp) + -0x64d4) = 0;                           // 0x001ba2c8: sw $zero, -0x64d4($gp)
label_0x1ba2cc:
    func_0019f390();  // 19f390                                // 0x001ba2cc: jal 0x19f390
    /* nop */                                                   // 0x001ba2d0: nop 
    s0 = s0 + 1;                                                // 0x001ba2d4: addiu $s0, $s0, 1
label_0x1ba2d8:
    v0 = (s0 < s1) ? 1 : 0;                                     // 0x001ba2d8: slt $v0, $s0, $s1
    if (v0 != 0) goto label_0x1ba2bc;                           // 0x001ba2dc: bnez $v0, 0x1ba2bc
    at = 0x31 << 16;                                            // 0x001ba2e0: lui $at, 0x31
    func_001ac000();  // 1ac000                                // 0x001ba2e4: jal 0x1ac000
    /* nop */                                                   // 0x001ba2e8: nop 
    at = 0x31 << 16;                                            // 0x001ba2ec: lui $at, 0x31
    g_003137d4 = v0;  // Global at 0x003137d4                   // 0x001ba2f0: sw $v0, 0x37d4($at)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ba2f8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ba2fc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ba300: jr $ra
    sp = sp + 0x30;                                             // 0x001ba304: addiu $sp, $sp, 0x30
}