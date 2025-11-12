void func_00173708() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00173708: addiu $sp, $sp, -0x10
    a1 = 4;                                                     // 0x00173714: addiu $a1, $zero, 4
    *(uint32_t*)((v0) + 0x4c) = 0;                              // 0x00173718: sw $zero, 0x4c($v0)
    *(uint32_t*)((v0) + 0x48) = 0;                              // 0x00173720: sw $zero, 0x48($v0)
    return func_001778a0();  // Tail call                        // 0x00173724: j 0x177808
    sp = sp + 0x10;                                             // 0x00173728: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017372c: nop 
    sp = sp + -0x10;                                            // 0x00173730: addiu $sp, $sp, -0x10
    func_00169b10();  // 0x169af0                                // 0x0017373c: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00173744: lui $a1, 0xff00
    if (v0 == 0) goto label_0x173768;                           // 0x0017374c: beqz $v0, 0x173768
    a1 = a1 | 0x132;                                            // 0x00173750: ori $a1, $a1, 0x132
    return func_00169940();  // Tail call                        // 0x00173760: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00173764: addiu $sp, $sp, 0x10
label_0x173768:
    func_001752f8();  // 0x1752e8                                // 0x00173768: jal 0x1752e8
    a1 = 0x2f;                                                  // 0x0017376c: addiu $a1, $zero, 0x2f
    v1 = 1;                                                     // 0x00173770: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x173790;                          // 0x00173774: bne $v0, $v1, 0x173790
    func_00171f90();  // 0x171f80                                // 0x0017377c: jal 0x171f80
    /* nop */                                                   // 0x00173780: nop 
    goto label_0x17379c;                                        // 0x00173784: b 0x17379c
    v1 = 1;                                                     // 0x00173788: addiu $v1, $zero, 1
    /* nop */                                                   // 0x0017378c: nop 
label_0x173790:
    func_001737c0();  // 0x1737b0                                // 0x00173790: jal 0x1737b0
    /* nop */                                                   // 0x00173794: nop 
    v1 = 1;                                                     // 0x00173798: addiu $v1, $zero, 1
label_0x17379c:
    *(uint32_t*)((s0) + 0x44) = v1;                             // 0x001737a0: sw $v1, 0x44($s0)
    return;                                                     // 0x001737a8: jr $ra
    sp = sp + 0x10;                                             // 0x001737ac: addiu $sp, $sp, 0x10
}