void func_001a2850() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a2850: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a2858: addu.qb $zero, $sp, $s1
    v0 = *(int32_t*)((gp) + -0x6424);                           // 0x001a2864: lw $v0, -0x6424($gp)
    v0 = v0 + 1;                                                // 0x001a2868: addiu $v0, $v0, 1
    func_001a29e0();  // 0x1a29b0                                // 0x001a286c: jal 0x1a29b0
    *(uint32_t*)((gp) + -0x6424) = v0;                          // 0x001a2870: sw $v0, -0x6424($gp)
    a1 = *(int32_t*)((v0) + 8);                                 // 0x001a2874: lw $a1, 8($v0)
    v1 = -1;                                                    // 0x001a2878: addiu $v1, $zero, -1
    if (a1 == v1) goto label_0x1a288c;                          // 0x001a287c: beq $a1, $v1, 0x1a288c
    func_001a28c0();  // 0x1a2850                                // 0x001a2884: jal 0x1a2850
label_0x1a288c:
    a1 = *(int32_t*)((s0) + 0xc);                               // 0x001a288c: lw $a1, 0xc($s0)
    v1 = -1;                                                    // 0x001a2890: addiu $v1, $zero, -1
    if (a1 == v1) goto label_0x1a28a4;                          // 0x001a2894: beq $a1, $v1, 0x1a28a4
    func_001a28c0();  // 0x1a2850                                // 0x001a289c: jal 0x1a2850
    /* nop */                                                   // 0x001a28a0: nop 
label_0x1a28a4:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a28a8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a28ac: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a28b0: jr $ra
    sp = sp + 0x30;                                             // 0x001a28b4: addiu $sp, $sp, 0x30
}