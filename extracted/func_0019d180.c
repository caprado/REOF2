void func_0019d180() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = a0 + -1;                                               // 0x0019d180: addiu $a1, $a0, -1
    sp = sp + -0x20;                                            // 0x0019d184: addiu $sp, $sp, -0x20
    v1 = a1 << 3;                                               // 0x0019d188: sll $v1, $a1, 3
    v0 = 0x29 << 16;                                            // 0x0019d190: lui $v0, 0x29
    v1 = v1 - a1;                                               // 0x0019d194: subu $v1, $v1, $a1
    v0 = v0 + -0x7380;                                          // 0x0019d19c: addiu $v0, $v0, -0x7380
    v1 = v1 << 3;                                               // 0x0019d1a0: sll $v1, $v1, 3
    if (a0 != 0) goto label_0x19d1b4;                           // 0x0019d1a4: bnez $a0, 0x19d1b4
    s0 = v0 + v1;                                               // 0x0019d1a8: addu $s0, $v0, $v1
    goto label_0x19d220;                                        // 0x0019d1ac: b 0x19d220
label_0x19d1b4:
    at = ((unsigned)a0 < (unsigned)0x101) ? 1 : 0;              // 0x0019d1b4: sltiu $at, $a0, 0x101
    if (at != 0) goto label_0x19d1c8;                           // 0x0019d1b8: bnez $at, 0x19d1c8
    goto label_0x19d224;                                        // 0x0019d1c0: b 0x19d224
label_0x19d1c8:
    v0 = *(int8_t*)((s0) + 0x34);                               // 0x0019d1c8: lb $v0, 0x34($s0)
    if (v0 != 0) goto label_0x19d1dc;                           // 0x0019d1cc: bnez $v0, 0x19d1dc
    goto label_0x19d220;                                        // 0x0019d1d4: b 0x19d220
    /* nop */                                                   // 0x0019d1d8: nop 
label_0x19d1dc:
    func_0018d530();  // 18d530                                // 0x0019d1dc: jal 0x18d530
    /* nop */                                                   // 0x0019d1e0: nop 
    func_0019ebd0();  // 19ebd0                                // 0x0019d1e4: jal 0x19ebd0
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x0019d1ec: lw $a0, 0x24($s0)
    if (a0 == 0) goto label_0x19d200;                           // 0x0019d1f0: beqz $a0, 0x19d200
    /* nop */                                                   // 0x0019d1f4: nop 
    thunk_func_0018daf0();  // 18daf0                          // 0x0019d1f8: jal 0x18daf0
    /* nop */                                                   // 0x0019d1fc: nop 
label_0x19d200:
    func_0018d9e0();  // 18d9e0                                // 0x0019d208: jal 0x18d9e0
    a2 = 0x38;                                                  // 0x0019d20c: addiu $a2, $zero, 0x38
    v1 = *(int32_t*)((gp) + -0x6444);                           // 0x0019d210: lw $v1, -0x6444($gp)
    v0 = 1;                                                     // 0x0019d214: addiu $v0, $zero, 1
    v1 = v1 + -1;                                               // 0x0019d218: addiu $v1, $v1, -1
    *(uint32_t*)((gp) + -0x6444) = v1;                          // 0x0019d21c: sw $v1, -0x6444($gp)
label_0x19d220:
label_0x19d224:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019d224: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019d228: jr $ra
    sp = sp + 0x20;                                             // 0x0019d22c: addiu $sp, $sp, 0x20
}