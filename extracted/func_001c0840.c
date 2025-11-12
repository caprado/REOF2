void func_001c0840() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c0840: addiu $sp, $sp, -0x20
    v0 = 2;                                                     // 0x001c0844: addiu $v0, $zero, 2
    v1 = *(int32_t*)(a0);                                       // 0x001c0850: lw $v1, 0($a0)
    if (v1 == v0) goto label_0x1c0950;                          // 0x001c0854: beq $v1, $v0, 0x1c0950
    v0 = 1;                                                     // 0x001c085c: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c08d8;                          // 0x001c0860: beq $v1, $v0, 0x1c08d8
    /* nop */                                                   // 0x001c0864: nop 
    if (v1 == 0) goto label_0x1c0878;                           // 0x001c0868: beqz $v1, 0x1c0878
    /* nop */                                                   // 0x001c086c: nop 
    goto label_0x1c0990;                                        // 0x001c0870: b 0x1c0990
label_0x1c0878:
    func_001bf210();  // 0x1bf010                                // 0x001c0878: jal 0x1bf010
    /* nop */                                                   // 0x001c087c: nop 
    v1 = 2;                                                     // 0x001c0880: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1c08c8;                          // 0x001c0884: beq $v0, $v1, 0x1c08c8
    v1 = 1;                                                     // 0x001c0888: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1c08c8;                          // 0x001c088c: beq $v0, $v1, 0x1c08c8
    /* nop */                                                   // 0x001c0890: nop 
    v1 = 3;                                                     // 0x001c0894: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1c08bc;                          // 0x001c0898: beq $v0, $v1, 0x1c08bc
    /* nop */                                                   // 0x001c089c: nop 
    if (v0 == 0) goto label_0x1c08b0;                           // 0x001c08a0: beqz $v0, 0x1c08b0
    /* nop */                                                   // 0x001c08a4: nop 
    goto label_0x1c098c;                                        // 0x001c08a8: b 0x1c098c
    /* nop */                                                   // 0x001c08ac: nop 
label_0x1c08b0:
    v0 = -0xff;                                                 // 0x001c08b0: addiu $v0, $zero, -0xff
    goto label_0x1c098c;                                        // 0x001c08b4: b 0x1c098c
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c08b8: sw $v0, 0x24($s0)
label_0x1c08bc:
    v0 = -0xfe;                                                 // 0x001c08bc: addiu $v0, $zero, -0xfe
    goto label_0x1c098c;                                        // 0x001c08c0: b 0x1c098c
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c08c4: sw $v0, 0x24($s0)
label_0x1c08c8:
    v0 = *(int32_t*)(s0);                                       // 0x001c08c8: lw $v0, 0($s0)
    v0 = v0 + 1;                                                // 0x001c08cc: addiu $v0, $v0, 1
    goto label_0x1c098c;                                        // 0x001c08d0: b 0x1c098c
    *(uint32_t*)(s0) = v0;                                      // 0x001c08d4: sw $v0, 0($s0)
label_0x1c08d8:
    func_001bf300();  // 0x1bf210                                // 0x001c08d8: jal 0x1bf210
    /* nop */                                                   // 0x001c08dc: nop 
    v1 = 3;                                                     // 0x001c08e0: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1c0940;                          // 0x001c08e4: beq $v0, $v1, 0x1c0940
    v1 = 2;                                                     // 0x001c08e8: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1c0930;                          // 0x001c08ec: beq $v0, $v1, 0x1c0930
    /* nop */                                                   // 0x001c08f0: nop 
    v1 = 1;                                                     // 0x001c08f4: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1c0920;                          // 0x001c08f8: beq $v0, $v1, 0x1c0920
    /* nop */                                                   // 0x001c08fc: nop 
    if (v0 == 0) goto label_0x1c0910;                           // 0x001c0900: beqz $v0, 0x1c0910
    /* nop */                                                   // 0x001c0904: nop 
    goto label_0x1c098c;                                        // 0x001c0908: b 0x1c098c
    /* nop */                                                   // 0x001c090c: nop 
label_0x1c0910:
    v0 = *(int32_t*)(s0);                                       // 0x001c0910: lw $v0, 0($s0)
    v0 = v0 + 1;                                                // 0x001c0914: addiu $v0, $v0, 1
    goto label_0x1c098c;                                        // 0x001c0918: b 0x1c098c
    *(uint32_t*)(s0) = v0;                                      // 0x001c091c: sw $v0, 0($s0)
label_0x1c0920:
    *(uint32_t*)(s0) = 0;                                       // 0x001c0920: sw $zero, 0($s0)
    v0 = -0xfd;                                                 // 0x001c0924: addiu $v0, $zero, -0xfd
    goto label_0x1c098c;                                        // 0x001c0928: b 0x1c098c
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c092c: sw $v0, 0x24($s0)
label_0x1c0930:
    *(uint32_t*)(s0) = 0;                                       // 0x001c0930: sw $zero, 0($s0)
    v0 = -0xff;                                                 // 0x001c0934: addiu $v0, $zero, -0xff
    goto label_0x1c098c;                                        // 0x001c0938: b 0x1c098c
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c093c: sw $v0, 0x24($s0)
label_0x1c0940:
    *(uint32_t*)(s0) = 0;                                       // 0x001c0940: sw $zero, 0($s0)
    v0 = -0x100;                                                // 0x001c0944: addiu $v0, $zero, -0x100
    goto label_0x1c098c;                                        // 0x001c0948: b 0x1c098c
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c094c: sw $v0, 0x24($s0)
label_0x1c0950:
    func_001bfa60();  // 0x1bf890                                // 0x001c0950: jal 0x1bf890
    /* nop */                                                   // 0x001c0954: nop 
    v1 = 1;                                                     // 0x001c0958: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1c0980;                          // 0x001c095c: beq $v0, $v1, 0x1c0980
    /* nop */                                                   // 0x001c0960: nop 
    if (v0 == 0) goto label_0x1c0974;                           // 0x001c0964: beqz $v0, 0x1c0974
    /* nop */                                                   // 0x001c0968: nop 
    goto label_0x1c098c;                                        // 0x001c096c: b 0x1c098c
    /* nop */                                                   // 0x001c0970: nop 
label_0x1c0974:
    *(uint32_t*)(s0) = 0;                                       // 0x001c0974: sw $zero, 0($s0)
    goto label_0x1c098c;                                        // 0x001c0978: b 0x1c098c
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x001c097c: sw $zero, 0x24($s0)
label_0x1c0980:
    *(uint32_t*)(s0) = 0;                                       // 0x001c0980: sw $zero, 0($s0)
    v0 = -0x100;                                                // 0x001c0984: addiu $v0, $zero, -0x100
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c0988: sw $v0, 0x24($s0)
label_0x1c098c:
label_0x1c0990:
    func_001bfc20();  // 0x1bfbf0                                // 0x001c0990: jal 0x1bfbf0
    /* nop */                                                   // 0x001c0994: nop 
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c099c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c09a0: jr $ra
    sp = sp + 0x20;                                             // 0x001c09a4: addiu $sp, $sp, 0x20
}