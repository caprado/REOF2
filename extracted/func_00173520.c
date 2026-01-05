void func_00173520() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00173520: addiu $sp, $sp, -0x20
    a2 = 0x30;                                                  // 0x00173530: addiu $a2, $zero, 0x30
    func_00155f90();  // 155f90                                // 0x00173540: jal 0x155f90
    s1 = 4;                                                     // 0x00173544: addiu $s1, $zero, 4
label_0x173550:
    s0 = s0 + 0x20;                                             // 0x00173550: addiu $s0, $s0, 0x20
    func_00177110();  // 177110                                // 0x00173554: jal 0x177110
    s1 = s1 + -1;                                               // 0x00173558: addiu $s1, $s1, -1
    if (s1 >= 0) goto label_0x173550;                           // 0x0017355c: bgez $s1, 0x173550
    a0 = s2 + 0xa0;                                             // 0x00173564: addiu $a0, $s2, 0xa0
    return func_00177130();  // Tail call                        // 0x00173578: j 0x177110
    sp = sp + 0x20;                                             // 0x0017357c: addiu $sp, $sp, 0x20
    sp = sp + -0x20;                                            // 0x00173580: addiu $sp, $sp, -0x20
    s0 = s1 + 0x94c;                                            // 0x0017359c: addiu $s0, $s1, 0x94c
    v0 = *(int32_t*)(s0);                                       // 0x001735a0: lw $v0, 0($s0)
    v0 = v0 + a1;                                               // 0x001735a4: addu $v0, $v0, $a1
    a1 = 0x24;                                                  // 0x001735a8: addiu $a1, $zero, 0x24
    func_001752e8();  // 1752e8                                // 0x001735ac: jal 0x1752e8
    *(uint32_t*)(s0) = v0;                                      // 0x001735b0: sw $v0, 0($s0)
    if (v0 == 0) goto label_0x1735cc;                           // 0x001735bc: beqz $v0, 0x1735cc
    /* call function at address in v0 */                        // 0x001735c4: jalr $v0
    /* nop */                                                   // 0x001735c8: nop 
label_0x1735cc:
    return;                                                     // 0x001735dc: jr $ra
    sp = sp + 0x20;                                             // 0x001735e0: addiu $sp, $sp, 0x20
}