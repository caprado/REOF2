void func_00129ad8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00129ad8: addiu $sp, $sp, -0x50
    func_00129ab0();  // 0x129a38                                // 0x00129b14: jal 0x129a38
    if (s4 >= 0) goto label_0x129b40;                           // 0x00129b20: bgezl $s4, 0x129b40
    v0 = s0 << 2;                                               // 0x00129b24: sll $v0, $s0, 2
    v1 = -1;                                                    // 0x00129b28: addiu $v1, $zero, -1
    *(uint32_t*)(s5) = 0;                                       // 0x00129b2c: sw $zero, 0($s5)
    *(uint32_t*)(s6) = v1;                                      // 0x00129b30: sw $v1, 0($s6)
    goto label_0x129c04;                                        // 0x00129b34: b 0x129c04
    *(uint32_t*)(s3) = v1;                                      // 0x00129b38: sw $v1, 0($s3)
    /* nop */                                                   // 0x00129b3c: nop 
label_0x129b40:
    a0 = 1;                                                     // 0x00129b40: addiu $a0, $zero, 1
    s1 = 0x1f << 16;                                            // 0x00129b44: lui $s1, 0x1f
    s1 = s1 + v0;                                               // 0x00129b48: addu $s1, $s1, $v0
    s1 = g_001f3300;  // Global at 0x001f3300                   // 0x00129b4c: lw $s1, 0x3300($s1)
    v1 = g_001f000f;  // Global at 0x001f000f                   // 0x00129b50: lb $v1, 0xf($s1)
    if (v1 != a0) goto label_0x129ba0;                          // 0x00129b54: bnel $v1, $a0, 0x129ba0
    s0 = g_001f0118;  // Global at 0x001f0118                   // 0x00129b58: lhu $s0, 0x118($s1)
    s0 = g_001f0118;  // Global at 0x001f0118                   // 0x00129b5c: lw $s0, 0x118($s1)
    if (s2 <= 0) goto label_0x129b8c;                           // 0x00129b60: blez $s2, 0x129b8c
    a1 = s1 + 0x11c;                                            // 0x00129b64: addiu $a1, $s1, 0x11c
label_0x129b70:
    v0 = *(int32_t*)(a0);                                       // 0x00129b70: lw $v0, 0($a0)
    a0 = a0 + 4;                                                // 0x00129b74: addiu $a0, $a0, 4
    v1 = v1 + -1;                                               // 0x00129b78: addiu $v1, $v1, -1
    /* nop */                                                   // 0x00129b7c: nop 
    /* nop */                                                   // 0x00129b80: nop 
    if (v1 != 0) goto label_0x129b70;                           // 0x00129b84: bnez $v1, 0x129b70
    s0 = s0 + v0;                                               // 0x00129b88: addu $s0, $s0, $v0
label_0x129b8c:
    v0 = s2 << 2;                                               // 0x00129b8c: sll $v0, $s2, 2
    v0 = v0 + a1;                                               // 0x00129b90: addu $v0, $v0, $a1
    goto label_0x129bd8;                                        // 0x00129b94: b 0x129bd8
    v1 = *(int32_t*)(v0);                                       // 0x00129b98: lw $v1, 0($v0)
    /* nop */                                                   // 0x00129b9c: nop 
label_0x129ba0:
    if (s2 <= 0) goto label_0x129bcc;                           // 0x00129ba0: blez $s2, 0x129bcc
    a1 = s1 + 0x11a;                                            // 0x00129ba4: addiu $a1, $s1, 0x11a
label_0x129bb0:
    v0 = *(uint16_t*)(a0);                                      // 0x00129bb0: lhu $v0, 0($a0)
    a0 = a0 + 2;                                                // 0x00129bb4: addiu $a0, $a0, 2
    v1 = v1 + -1;                                               // 0x00129bb8: addiu $v1, $v1, -1
    /* nop */                                                   // 0x00129bbc: nop 
    /* nop */                                                   // 0x00129bc0: nop 
    if (v1 != 0) goto label_0x129bb0;                           // 0x00129bc4: bnez $v1, 0x129bb0
    s0 = s0 + v0;                                               // 0x00129bc8: addu $s0, $s0, $v0
label_0x129bcc:
    v0 = s2 << 1;                                               // 0x00129bcc: sll $v0, $s2, 1
    v0 = v0 + a1;                                               // 0x00129bd0: addu $v0, $v0, $a1
    v1 = *(uint16_t*)(v0);                                      // 0x00129bd4: lhu $v1, 0($v0)
label_0x129bd8:
    *(uint32_t*)(s3) = v1;                                      // 0x00129bd8: sw $v1, 0($s3)
    a1 = s1 + 0x10;                                             // 0x00129be0: addiu $a1, $s1, 0x10
    func_0010b460();  // 0x10b2a0                                // 0x00129be4: jal 0x10b2a0
    a2 = 0x100;                                                 // 0x00129be8: addiu $a2, $zero, 0x100
    a0 = g_001f0110;  // Global at 0x001f0110                   // 0x00129bec: lw $a0, 0x110($s1)
    v1 = g_001f0114;  // Global at 0x001f0114                   // 0x00129bf0: lw $v1, 0x114($s1)
    *(uint32_t*)(s5) = a0;                                      // 0x00129bf8: sw $a0, 0($s5)
    v1 = v1 + s0;                                               // 0x00129bfc: addu $v1, $v1, $s0
    *(uint32_t*)(s6) = v1;                                      // 0x00129c00: sw $v1, 0($s6)
label_0x129c04:
    return;                                                     // 0x00129c28: jr $ra
    sp = sp + 0x50;                                             // 0x00129c2c: addiu $sp, $sp, 0x50
}