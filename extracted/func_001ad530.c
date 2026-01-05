void func_001ad530() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001ad530: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ad538: addu.qb $zero, $sp, $s1
    func_001aaca0();  // 1aaca0                                // 0x001ad544: jal 0x1aaca0
    if (s0 >= 0) goto label_0x1ad560;                           // 0x001ad550: bgez $s0, 0x1ad560
    a0 = 0xe;                                                   // 0x001ad554: addiu $a0, $zero, 0xe
    goto label_0x1ad5e8;                                        // 0x001ad558: b 0x1ad5e8
label_0x1ad560:
    func_001b7a70();  // 1b7a70                                // 0x001ad560: jal 0x1b7a70
    /* nop */                                                   // 0x001ad564: nop 
    if (v0 == 0) goto label_0x1ad578;                           // 0x001ad568: beqz $v0, 0x1ad578
    a0 = 0xa;                                                   // 0x001ad56c: addiu $a0, $zero, 0xa
    goto label_0x1ad5e8;                                        // 0x001ad570: b 0x1ad5e8
label_0x1ad578:
    func_001b7a70();  // 1b7a70                                // 0x001ad578: jal 0x1b7a70
    /* nop */                                                   // 0x001ad57c: nop 
    if (v0 == 0) goto label_0x1ad598;                           // 0x001ad580: beqz $v0, 0x1ad598
    v1 = s1 << 1;                                               // 0x001ad584: sll $v1, $s1, 1
    if (s1 != 0) goto label_0x1ad598;                           // 0x001ad588: bnez $s1, 0x1ad598
    /* nop */                                                   // 0x001ad58c: nop 
    goto label_0x1ad5e8;                                        // 0x001ad590: b 0x1ad5e8
label_0x1ad598:
    v0 = 0x2b << 16;                                            // 0x001ad598: lui $v0, 0x2b
    v1 = v1 + s1;                                               // 0x001ad59c: addu $v1, $v1, $s1
    v0 = v0 + -0x57d8;                                          // 0x001ad5a0: addiu $v0, $v0, -0x57d8
    v1 = v1 << 3;                                               // 0x001ad5a4: sll $v1, $v1, 3
    v0 = v0 + v1;                                               // 0x001ad5a8: addu $v0, $v0, $v1
    a1 = g_002aa828;  // Global at 0x002aa828                   // 0x001ad5ac: lw $a1, 0($v0)
    func_001ad9c0();  // 1ad9c0                                // 0x001ad5b0: jal 0x1ad9c0
    v0 = 0x2b << 16;                                            // 0x001ad5b8: lui $v0, 0x2b
    v1 = s1 << 2;                                               // 0x001ad5bc: sll $v1, $s1, 2
    v0 = v0 + -0x5788;                                          // 0x001ad5c4: addiu $v0, $v0, -0x5788
    s0 = v0 + v1;                                               // 0x001ad5c8: addu $s0, $v0, $v1
    a0 = *(int32_t*)(s0);                                       // 0x001ad5cc: lw $a0, 0($s0)
    func_00133150();  // 133150                                // 0x001ad5d0: jal 0x133150
    a1 = 3;                                                     // 0x001ad5d4: addiu $a1, $zero, 3
    a0 = *(int32_t*)(s0);                                       // 0x001ad5d8: lw $a0, 0($s0)
    func_00132b10();  // 132b10                                // 0x001ad5dc: jal 0x132b10
label_0x1ad5e8:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ad5ec: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ad5f0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ad5f4: jr $ra
    sp = sp + 0x30;                                             // 0x001ad5f8: addiu $sp, $sp, 0x30
}