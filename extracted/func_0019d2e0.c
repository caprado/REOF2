void func_0019d2e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = a0 + -1;                                               // 0x0019d2e0: addiu $a1, $a0, -1
    sp = sp + -0x20;                                            // 0x0019d2e4: addiu $sp, $sp, -0x20
    v1 = a1 << 3;                                               // 0x0019d2e8: sll $v1, $a1, 3
    v0 = 0x28 << 16;                                            // 0x0019d2f0: lui $v0, 0x28
    v1 = v1 - a1;                                               // 0x0019d2f4: subu $v1, $v1, $a1
    v0 = v0 + 0x5480;                                           // 0x0019d2fc: addiu $v0, $v0, 0x5480
    v1 = v1 << 3;                                               // 0x0019d300: sll $v1, $v1, 3
    if (a0 != 0) goto label_0x19d314;                           // 0x0019d304: bnez $a0, 0x19d314
    s0 = v0 + v1;                                               // 0x0019d308: addu $s0, $v0, $v1
    goto label_0x19d380;                                        // 0x0019d30c: b 0x19d380
label_0x19d314:
    at = ((unsigned)a0 < (unsigned)0x101) ? 1 : 0;              // 0x0019d314: sltiu $at, $a0, 0x101
    if (at != 0) goto label_0x19d328;                           // 0x0019d318: bnez $at, 0x19d328
    goto label_0x19d384;                                        // 0x0019d320: b 0x19d384
label_0x19d328:
    v0 = *(int8_t*)((s0) + 0x34);                               // 0x0019d328: lb $v0, 0x34($s0)
    if (v0 != 0) goto label_0x19d33c;                           // 0x0019d32c: bnez $v0, 0x19d33c
    goto label_0x19d380;                                        // 0x0019d334: b 0x19d380
    /* nop */                                                   // 0x0019d338: nop 
label_0x19d33c:
    func_0018d530();  // 18d530                                // 0x0019d33c: jal 0x18d530
    /* nop */                                                   // 0x0019d340: nop 
    func_0019ebd0();  // 19ebd0                                // 0x0019d344: jal 0x19ebd0
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x0019d34c: lw $a0, 0x24($s0)
    if (a0 == 0) goto label_0x19d360;                           // 0x0019d350: beqz $a0, 0x19d360
    /* nop */                                                   // 0x0019d354: nop 
    thunk_func_0018daf0();  // 18daf0                          // 0x0019d358: jal 0x18daf0
    /* nop */                                                   // 0x0019d35c: nop 
label_0x19d360:
    func_0018d9e0();  // 18d9e0                                // 0x0019d368: jal 0x18d9e0
    a2 = 0x38;                                                  // 0x0019d36c: addiu $a2, $zero, 0x38
    v1 = *(int32_t*)((gp) + -0x6484);                           // 0x0019d370: lw $v1, -0x6484($gp)
    v0 = 1;                                                     // 0x0019d374: addiu $v0, $zero, 1
    v1 = v1 + -1;                                               // 0x0019d378: addiu $v1, $v1, -1
    *(uint32_t*)((gp) + -0x6484) = v1;                          // 0x0019d37c: sw $v1, -0x6484($gp)
label_0x19d380:
label_0x19d384:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019d384: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019d388: jr $ra
    sp = sp + 0x20;                                             // 0x0019d38c: addiu $sp, $sp, 0x20
}