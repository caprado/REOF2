void func_0019d394() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0019d394: addiu $sp, $sp, -0x20
    v1 = a1 << 3;                                               // 0x0019d398: sll $v1, $a1, 3
    v0 = 0x28 << 16;                                            // 0x0019d3a0: lui $v0, 0x28
    v1 = v1 - a1;                                               // 0x0019d3a4: subu $v1, $v1, $a1
    v0 = v0 + 0x5480;                                           // 0x0019d3ac: addiu $v0, $v0, 0x5480
    v1 = v1 << 3;                                               // 0x0019d3b0: sll $v1, $v1, 3
    if (a0 != 0) goto label_0x19d3c4;                           // 0x0019d3b4: bnez $a0, 0x19d3c4
    s0 = v0 + v1;                                               // 0x0019d3b8: addu $s0, $v0, $v1
    goto label_0x19d428;                                        // 0x0019d3bc: b 0x19d428
label_0x19d3c4:
    at = ((unsigned)a0 < (unsigned)0x101) ? 1 : 0;              // 0x0019d3c4: sltiu $at, $a0, 0x101
    if (at != 0) goto label_0x19d3d8;                           // 0x0019d3c8: bnez $at, 0x19d3d8
    goto label_0x19d42c;                                        // 0x0019d3d0: b 0x19d42c
label_0x19d3d8:
    v0 = *(int8_t*)((s0) + 0x34);                               // 0x0019d3d8: lb $v0, 0x34($s0)
    if (v0 != 0) goto label_0x19d3ec;                           // 0x0019d3dc: bnez $v0, 0x19d3ec
    goto label_0x19d428;                                        // 0x0019d3e4: b 0x19d428
label_0x19d3ec:
    func_0019ec00();  // 0x19ebd0                                // 0x0019d3ec: jal 0x19ebd0
    /* nop */                                                   // 0x0019d3f0: nop 
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x0019d3f4: lw $a0, 0x24($s0)
    if (a0 == 0) goto label_0x19d408;                           // 0x0019d3f8: beqz $a0, 0x19d408
    /* nop */                                                   // 0x0019d3fc: nop 
    thunk_func_001a0a10();  // 0x18daf0                          // 0x0019d400: jal 0x18daf0
    /* nop */                                                   // 0x0019d404: nop 
label_0x19d408:
    func_0018da10();  // 0x18d9e0                                // 0x0019d410: jal 0x18d9e0
    a2 = 0x38;                                                  // 0x0019d414: addiu $a2, $zero, 0x38
    v1 = *(int32_t*)((gp) + -0x6484);                           // 0x0019d418: lw $v1, -0x6484($gp)
    v0 = 1;                                                     // 0x0019d41c: addiu $v0, $zero, 1
    v1 = v1 + -1;                                               // 0x0019d420: addiu $v1, $v1, -1
    *(uint32_t*)((gp) + -0x6484) = v1;                          // 0x0019d424: sw $v1, -0x6484($gp)
label_0x19d428:
label_0x19d42c:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019d42c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019d430: jr $ra
    sp = sp + 0x20;                                             // 0x0019d434: addiu $sp, $sp, 0x20
}