void func_001406e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001406e0: addiu $sp, $sp, -0x40
    *(uint32_t*)(s3) = 0;                                       // 0x0014070c: sw $zero, 0($s3)
    *(uint32_t*)((s3) + 4) = 0;                                 // 0x00140710: sw $zero, 4($s3)
    v0 = *(int32_t*)(a0);                                       // 0x00140714: lw $v0, 0($a0)
    v1 = *(int32_t*)((a0) + 4);                                 // 0x00140718: lw $v1, 4($a0)
    goto label_0x140750;                                        // 0x00140720: b 0x140750
    s4 = v0 + v1;                                               // 0x00140724: addu $s4, $v0, $v1
label_0x140728:
    if (s2 == 0) goto label_0x140740;                           // 0x00140728: beqz $s2, 0x140740
    /* nop */                                                   // 0x0014072c: nop 
    func_0010b2a0();  // 0x10b0e8                                // 0x00140730: jal 0x10b0e8
    /* nop */                                                   // 0x00140734: nop 
    /* beqzl $v0, 0x140790 */                                   // 0x00140738: beqzl $v0, 0x140790
label_0x140740:
    func_00140648();  // 0x140598                                // 0x00140740: jal 0x140598
    a0 = s0 + 8;                                                // 0x00140744: addiu $a0, $s0, 8
    v0 = s0 + v0;                                               // 0x00140748: addu $v0, $s0, $v0
    s0 = v0 + 0x10;                                             // 0x0014074c: addiu $s0, $v0, 0x10
label_0x140750:
    s1 = ((unsigned)s0 < (unsigned)s4) ? 1 : 0;                 // 0x00140750: sltu $s1, $s0, $s4
    if (s1 == 0) goto label_0x140788;                           // 0x00140754: beqz $s1, 0x140788
    func_0010b2a0();  // 0x10b0e8                                // 0x00140764: jal 0x10b0e8
    a2 = 7;                                                     // 0x00140768: addiu $a2, $zero, 7
    if (v0 != 0) goto label_0x140728;                           // 0x00140774: bnez $v0, 0x140728
    a2 = 7;                                                     // 0x00140778: addiu $a2, $zero, 7
    func_001406e0();  // 0x1406a8                                // 0x0014077c: jal 0x1406a8
label_0x140788:
    if (s1 != 0) v0 = s0;                                       // 0x00140788: movn $v0, $s0, $s1
    return;                                                     // 0x001407a8: jr $ra
    sp = sp + 0x40;                                             // 0x001407ac: addiu $sp, $sp, 0x40
}