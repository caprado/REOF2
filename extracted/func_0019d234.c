void func_0019d234() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0019d234: addiu $sp, $sp, -0x20
    v1 = a1 << 3;                                               // 0x0019d238: sll $v1, $a1, 3
    v0 = 0x29 << 16;                                            // 0x0019d240: lui $v0, 0x29
    v1 = v1 - a1;                                               // 0x0019d244: subu $v1, $v1, $a1
    v0 = v0 + -0x7380;                                          // 0x0019d24c: addiu $v0, $v0, -0x7380
    v1 = v1 << 3;                                               // 0x0019d250: sll $v1, $v1, 3
    if (a0 != 0) goto label_0x19d264;                           // 0x0019d254: bnez $a0, 0x19d264
    s0 = v0 + v1;                                               // 0x0019d258: addu $s0, $v0, $v1
    goto label_0x19d2c8;                                        // 0x0019d25c: b 0x19d2c8
label_0x19d264:
    at = ((unsigned)a0 < (unsigned)0x101) ? 1 : 0;              // 0x0019d264: sltiu $at, $a0, 0x101
    if (at != 0) goto label_0x19d278;                           // 0x0019d268: bnez $at, 0x19d278
    goto label_0x19d2cc;                                        // 0x0019d270: b 0x19d2cc
label_0x19d278:
    v0 = *(int8_t*)((s0) + 0x34);                               // 0x0019d278: lb $v0, 0x34($s0)
    if (v0 != 0) goto label_0x19d28c;                           // 0x0019d27c: bnez $v0, 0x19d28c
    goto label_0x19d2c8;                                        // 0x0019d284: b 0x19d2c8
label_0x19d28c:
    func_0019ec00();  // 0x19ebd0                                // 0x0019d28c: jal 0x19ebd0
    /* nop */                                                   // 0x0019d290: nop 
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x0019d294: lw $a0, 0x24($s0)
    if (a0 == 0) goto label_0x19d2a8;                           // 0x0019d298: beqz $a0, 0x19d2a8
    /* nop */                                                   // 0x0019d29c: nop 
    thunk_func_001a0a10();  // 0x18daf0                          // 0x0019d2a0: jal 0x18daf0
    /* nop */                                                   // 0x0019d2a4: nop 
label_0x19d2a8:
    func_0018da10();  // 0x18d9e0                                // 0x0019d2b0: jal 0x18d9e0
    a2 = 0x38;                                                  // 0x0019d2b4: addiu $a2, $zero, 0x38
    v1 = *(int32_t*)((gp) + -0x6444);                           // 0x0019d2b8: lw $v1, -0x6444($gp)
    v0 = 1;                                                     // 0x0019d2bc: addiu $v0, $zero, 1
    v1 = v1 + -1;                                               // 0x0019d2c0: addiu $v1, $v1, -1
    *(uint32_t*)((gp) + -0x6444) = v1;                          // 0x0019d2c4: sw $v1, -0x6444($gp)
label_0x19d2c8:
label_0x19d2cc:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019d2cc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019d2d0: jr $ra
    sp = sp + 0x20;                                             // 0x0019d2d4: addiu $sp, $sp, 0x20
}