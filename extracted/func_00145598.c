void func_00145598() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00145598: addiu $sp, $sp, -0x40
    v0 = 0x1000 << 16;                                          // 0x0014559c: lui $v0, 0x1000
    v0 = v0 | 0x2010;                                           // 0x001455a4: ori $v0, $v0, 0x2010
    a2 = 0x8000 << 16;                                          // 0x001455ac: lui $a2, 0x8000
    a2 = a2 | 0x4000;                                           // 0x001455b4: ori $a2, $a2, 0x4000
    v1 = g_10000000;  // Global at 0x10000000                   // 0x001455c8: lw $v1, 0($v0)
    v0 = 0x8000 << 16;                                          // 0x001455cc: lui $v0, 0x8000
    v1 = v1 & a2;                                               // 0x001455d0: and $v1, $v1, $a2
    if (v1 != v0) goto label_0x145644;                          // 0x001455d4: bne $v1, $v0, 0x145644
    s2 = 0x21 << 16;                                            // 0x001455d8: lui $s2, 0x21
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x001455dc: lw $v0, 0x10a0($s0)
    if (v0 != 0) goto label_0x145648;                           // 0x001455e0: bnez $v0, 0x145648
    v0 = 0x4000 << 16;                                          // 0x001455e4: lui $v0, 0x4000
    s2 = 0x21 << 16;                                            // 0x001455e8: lui $s2, 0x21
    /* nop */                                                   // 0x001455ec: nop 
label_0x1455f0:
    v0 = (v0 < 0x1389) ? 1 : 0;                                 // 0x001455f4: slti $v0, $v0, 0x1389
    if (v0 != 0) goto label_0x14560c;                           // 0x001455f8: bnez $v0, 0x14560c
    a3 = a3 + 1;                                                // 0x001455fc: addiu $a3, $a3, 1
    func_00147d70();  // 0x147ca0                                // 0x00145600: jal 0x147ca0
    a0 = *(int32_t*)((s0) + 0x870);                             // 0x00145604: lw $a0, 0x870($s0)
label_0x14560c:
    v1 = 0x1000 << 16;                                          // 0x0014560c: lui $v1, 0x1000
    a0 = 0x8000 << 16;                                          // 0x00145610: lui $a0, 0x8000
    v1 = v1 | 0x2010;                                           // 0x00145614: ori $v1, $v1, 0x2010
    a0 = a0 | 0x4000;                                           // 0x00145618: ori $a0, $a0, 0x4000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x0014561c: lw $v0, 0($v1)
    a1 = 0x8000 << 16;                                          // 0x00145620: lui $a1, 0x8000
    v0 = v0 & a0;                                               // 0x00145624: and $v0, $v0, $a0
    if (v0 != a1) goto label_0x145648;                          // 0x00145628: bne $v0, $a1, 0x145648
    v0 = 0x4000 << 16;                                          // 0x0014562c: lui $v0, 0x4000
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x00145630: lw $v0, 0x10a0($s0)
    if (v0 == 0) goto label_0x1455f0;                           // 0x00145634: beqz $v0, 0x1455f0
    v0 = 0x4000 << 16;                                          // 0x00145638: lui $v0, 0x4000
    goto label_0x14564c;                                        // 0x0014563c: b 0x14564c
    v1 = 0x1000 << 16;                                          // 0x00145640: lui $v1, 0x1000
label_0x145644:
    v0 = 0x4000 << 16;                                          // 0x00145644: lui $v0, 0x4000
label_0x145648:
    v1 = 0x1000 << 16;                                          // 0x00145648: lui $v1, 0x1000
label_0x14564c:
    v0 = s1 | v0;                                               // 0x0014564c: or $v0, $s1, $v0
    v1 = v1 | 0x2000;                                           // 0x00145650: ori $v1, $v1, 0x2000
    g_10000000 = v0;  // Global at 0x10000000                   // 0x00145654: sw $v0, 0($v1)
    a1 = (unsigned)v0 >> 0x1c;                                  // 0x00145658: srl $a1, $v0, 0x1c
    v0 = s2 + 0xcf8;                                            // 0x0014565c: addiu $v0, $s2, 0xcf8
    a1 = a1 << 2;                                               // 0x00145660: sll $a1, $a1, 2
    a1 = a1 + v0;                                               // 0x00145664: addu $a1, $a1, $v0
    v0 = g_80000000;  // Global at 0x80000000                   // 0x0014566c: lw $v0, 0($a1)
    func_00145208();  // 0x145080                                // 0x00145670: jal 0x145080
    *(uint32_t*)((s0) + 0x830) = v0;                            // 0x00145674: sw $v0, 0x830($s0)
    v1 = 0x20;                                                  // 0x00145680: addiu $v1, $zero, 0x20
    *(uint32_t*)((s0) + 0x854) = v1;                            // 0x00145684: sw $v1, 0x854($s0)
    *(uint32_t*)((s0) + 0x850) = v0;                            // 0x00145688: sw $v0, 0x850($s0)
    return;                                                     // 0x0014569c: jr $ra
    sp = sp + 0x40;                                             // 0x001456a0: addiu $sp, $sp, 0x40
}