void func_001bf510() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bf510: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x001bf514: addiu $v0, $zero, 1
    v1 = *(int32_t*)((a0) + 4);                                 // 0x001bf520: lw $v1, 4($a0)
    if (v1 == v0) goto label_0x1bf588;                          // 0x001bf524: beq $v1, $v0, 0x1bf588
    if (v1 == 0) goto label_0x1bf53c;                           // 0x001bf52c: beqz $v1, 0x1bf53c
    /* nop */                                                   // 0x001bf530: nop 
    goto label_0x1bf5ac;                                        // 0x001bf534: b 0x1bf5ac
    v0 = -1;                                                    // 0x001bf538: addiu $v0, $zero, -1
label_0x1bf53c:
    func_001befe0();  // 1befe0                                // 0x001bf53c: jal 0x1befe0
    /* nop */                                                   // 0x001bf540: nop 
    if (v0 < 0) goto label_0x1bf5a8;                            // 0x001bf544: bltz $v0, 0x1bf5a8
    /* nop */                                                   // 0x001bf548: nop 
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001bf54c: lw $v1, 0x14($s0)
    v0 = gp + -0x6300;                                          // 0x001bf550: addiu $v0, $gp, -0x6300
    v1 = v1 << 2;                                               // 0x001bf554: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001bf558: addu $v0, $v0, $v1
    a0 = *(int32_t*)(v0);                                       // 0x001bf55c: lw $a0, 0($v0)
    func_00181308();  // 181308                                // 0x001bf560: jal 0x181308
    a1 = s0 + 0x72;                                             // 0x001bf564: addiu $a1, $s0, 0x72
    if (v0 >= 0) goto label_0x1bf578;                           // 0x001bf568: bgez $v0, 0x1bf578
    /* nop */                                                   // 0x001bf56c: nop 
    goto label_0x1bf5ac;                                        // 0x001bf570: b 0x1bf5ac
    v0 = 1;                                                     // 0x001bf574: addiu $v0, $zero, 1
label_0x1bf578:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001bf578: lw $v0, 4($s0)
    v0 = v0 + 1;                                                // 0x001bf57c: addiu $v0, $v0, 1
    goto label_0x1bf5a8;                                        // 0x001bf580: b 0x1bf5a8
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001bf584: sw $v0, 4($s0)
label_0x1bf588:
    func_001befe0();  // 1befe0                                // 0x001bf588: jal 0x1befe0
    /* nop */                                                   // 0x001bf58c: nop 
    if (v0 < 0) goto label_0x1bf5a8;                            // 0x001bf590: bltz $v0, 0x1bf5a8
    /* nop */                                                   // 0x001bf594: nop 
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001bf598: sw $zero, 4($s0)
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x001bf59c: lw $v0, 0x1c($s0)
    goto label_0x1bf5ac;                                        // 0x001bf5a0: b 0x1bf5ac
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x001bf5a4: slt $v0, $v0, $zero
label_0x1bf5a8:
    v0 = -1;                                                    // 0x001bf5a8: addiu $v0, $zero, -1
label_0x1bf5ac:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bf5b0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bf5b4: jr $ra
    sp = sp + 0x20;                                             // 0x001bf5b8: addiu $sp, $sp, 0x20
}