void func_00132730() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00132730: addiu $sp, $sp, -0x30
    *(float*)((sp) + 0x20) = FPU_F20;  // Store float           // 0x0013273c: swc1 $f20, 0x20($sp)
    /* move to FPU: $zero, $f20 */                              // 0x00132748: mtc1 $zero, $f20
    if (s2 != 0) goto label_0x132770;                           // 0x0013274c: bnez $s2, 0x132770
    a0 = 0x22 << 16;                                            // 0x00132754: lui $a0, 0x22
    func_00127d90();  // 127d90                                // 0x00132758: jal 0x127d90
    a0 = &str_00223b48;  // "E02080836 ADXT_IsIbufSafety: parameter error" // 0x0013275c: addiu $a0, $a0, 0x3b48
    at = 0xbf80 << 16;                                          // 0x00132760: lui $at, 0xbf80
    /* move to FPU: $at, $f0 */                                 // 0x00132764: mtc1 $at, $f0
    goto label_0x1327fc;                                        // 0x00132768: b 0x1327fc
label_0x132770:
    func_00131bb8();  // 131bb8                                // 0x00132770: jal 0x131bb8
    /* nop */                                                   // 0x00132774: nop 
    v0 = (v0 < 2) ? 1 : 0;                                      // 0x00132778: slti $v0, $v0, 2
    if (v0 != 0) goto label_0x1327f8;                           // 0x0013277c: bnez $v0, 0x1327f8
    /* FPU: mov.s $f0, $f20 */                                  // 0x00132780: mov.s $f0, $f20
    v1 = *(int32_t*)((s2) + 0x14);                              // 0x00132784: lw $v1, 0x14($s2)
    if (v1 == 0) goto label_0x1327f8;                           // 0x00132788: beqz $v1, 0x1327f8
    v1 = *(int32_t*)(v1);                                       // 0x00132790: lw $v1, 0($v1)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x00132794: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x00132798: jalr $v0
    a1 = 1;                                                     // 0x0013279c: addiu $a1, $zero, 1
    func_00132208();  // 132208                                // 0x001327a4: jal 0x132208
    func_001321b8();  // 1321b8                                // 0x001327b0: jal 0x1321b8
    v1 = s1 << 3;                                               // 0x001327b8: sll $v1, $s1, 3
    v1 = v1 + s1;                                               // 0x001327bc: addu $v1, $v1, $s1
    /* move to FPU: $v0, $f1 */                                 // 0x001327c0: mtc1 $v0, $f1
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x001327c4: cvt.s.w $f1, $f1
    v1 = v1 << 1;                                               // 0x001327c8: sll $v1, $v1, 1
    /* divide: s0 / v1 -> hi:lo */                              // 0x001327cc: div $zero, $s0, $v1
    /* beqzl $v1, 0x1327d8 */                                   // 0x001327d0: beqzl $v1, 0x1327d8
    /* break (trap) */                                          // 0x001327d4: break 0, 7
    /* mflo $s0 */                                              // 0x001327d8
    s0 = s0 << 5;                                               // 0x001327dc: sll $s0, $s0, 5
    /* move to FPU: $s0, $f0 */                                 // 0x001327e0: mtc1 $s0, $f0
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001327e4: cvt.s.w $f0, $f0
    /* nop */                                                   // 0x001327e8: nop 
    /* nop */                                                   // 0x001327ec: nop 
    /* FPU: div.s $f20, $f0, $f1 */                             // 0x001327f0: div.s $f20, $f0, $f1
    /* FPU: mov.s $f0, $f20 */                                  // 0x001327f4: mov.s $f0, $f20
label_0x1327f8:
label_0x1327fc:
    FPU_F20 = *(float*)((sp) + 0x20);  // Load float            // 0x00132808: lwc1 $f20, 0x20($sp)
    return;                                                     // 0x0013280c: jr $ra
    sp = sp + 0x30;                                             // 0x00132810: addiu $sp, $sp, 0x30
}