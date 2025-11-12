void func_001a90e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x110;                                           // 0x001a90e0: addiu $sp, $sp, -0x110
    a1 = 0x23 << 16;                                            // 0x001a90e4: lui $a1, 0x23
    a2 = 0x2a << 16;                                            // 0x001a90e8: lui $a2, 0x2a
    a0 = sp + 0x10;                                             // 0x001a90f0: addiu $a0, $sp, 0x10
    a1 = &str_0022a9b0;  // "%snetbio01.dat"                    // 0x001a90f4: addiu $a1, $a1, -0x5650
    func_0010a570();  // 0x10a4d8                                // 0x001a90f8: jal 0x10a4d8
    a2 = a2 + 0x14d0;                                           // 0x001a90fc: addiu $a2, $a2, 0x14d0
    a3 = 0x2a << 16;                                            // 0x001a9100: lui $a3, 0x2a
    a0 = 0xa;                                                   // 0x001a9104: addiu $a0, $zero, 0xa
    a1 = sp + 0x10;                                             // 0x001a9108: addiu $a1, $sp, 0x10
    func_001283f8();  // 0x1283d0                                // 0x001a9110: jal 0x1283d0
    a3 = a3 + 0x4f80;                                           // 0x001a9114: addiu $a3, $a3, 0x4f80
label_0x1a9118:
    func_00128be8();  // 0x1287d8                                // 0x001a9118: jal 0x1287d8
    a0 = 0xa;                                                   // 0x001a911c: addiu $a0, $zero, 0xa
    v1 = 3;                                                     // 0x001a9120: addiu $v1, $zero, 3
    /* nop */                                                   // 0x001a9124: nop 
    /* nop */                                                   // 0x001a9128: nop 
    if (v0 != v1) goto label_0x1a9118;                          // 0x001a912c: bne $v0, $v1, 0x1a9118
    /* nop */                                                   // 0x001a9130: nop 
    a1 = 0x23 << 16;                                            // 0x001a9134: lui $a1, 0x23
    a2 = 0x2a << 16;                                            // 0x001a9138: lui $a2, 0x2a
    a0 = sp + 0x10;                                             // 0x001a913c: addiu $a0, $sp, 0x10
    a1 = &str_0022a9c0;  // "romdata.afs"                       // 0x001a9140: addiu $a1, $a1, -0x5640
    func_0010a570();  // 0x10a4d8                                // 0x001a9144: jal 0x10a4d8
    a2 = a2 + 0x14c0;                                           // 0x001a9148: addiu $a2, $a2, 0x14c0
    a3 = 0x2a << 16;                                            // 0x001a914c: lui $a3, 0x2a
    a0 = 0xd;                                                   // 0x001a9150: addiu $a0, $zero, 0xd
    a1 = sp + 0x10;                                             // 0x001a9154: addiu $a1, $sp, 0x10
    func_001283f8();  // 0x1283d0                                // 0x001a915c: jal 0x1283d0
    a3 = a3 + 0x4e50;                                           // 0x001a9160: addiu $a3, $a3, 0x4e50
label_0x1a9164:
    func_00128be8();  // 0x1287d8                                // 0x001a9164: jal 0x1287d8
    a0 = 0xd;                                                   // 0x001a9168: addiu $a0, $zero, 0xd
    v1 = 3;                                                     // 0x001a916c: addiu $v1, $zero, 3
    /* nop */                                                   // 0x001a9170: nop 
    /* nop */                                                   // 0x001a9174: nop 
    if (v0 != v1) goto label_0x1a9164;                          // 0x001a9178: bne $v0, $v1, 0x1a9164
    /* nop */                                                   // 0x001a917c: nop 
    a0 = 0x2a << 16;                                            // 0x001a9180: lui $a0, 0x2a
    a0 = a0 + 0x4e00;                                           // 0x001a9188: addiu $a0, $a0, 0x4e00
    func_00107d30();  // 0x107c70                                // 0x001a918c: jal 0x107c70
    a2 = 0x48;                                                  // 0x001a9190: addiu $a2, $zero, 0x48
    v1 = 0x2a << 16;                                            // 0x001a9194: lui $v1, 0x2a
    v0 = 0x2a << 16;                                            // 0x001a9198: lui $v0, 0x2a
    v1 = v1 + 0x4e00;                                           // 0x001a919c: addiu $v1, $v1, 0x4e00
    v0 = v0 + 0x4e24;                                           // 0x001a91a0: addiu $v0, $v0, 0x4e24
    *(uint32_t*)((gp) + -0x63ec) = v1;                          // 0x001a91a4: sw $v1, -0x63ec($gp)
    a1 = 0xb;                                                   // 0x001a91a8: addiu $a1, $zero, 0xb
    *(uint32_t*)((gp) + -0x63e8) = v0;                          // 0x001a91ac: sw $v0, -0x63e8($gp)
    a0 = 1;                                                     // 0x001a91b0: addiu $a0, $zero, 1
    v0 = *(int32_t*)((gp) + -0x63ec);                           // 0x001a91b4: lw $v0, -0x63ec($gp)
    v1 = 0xc;                                                   // 0x001a91b8: addiu $v1, $zero, 0xc
    g_002a4e24 = 0;  // Global at 0x002a4e24                    // 0x001a91bc: sw $zero, 0($v0)
    v0 = *(int32_t*)((gp) + -0x63ec);                           // 0x001a91c0: lw $v0, -0x63ec($gp)
    g_002a4e44 = a1;  // Global at 0x002a4e44                   // 0x001a91c4: sw $a1, 0x20($v0)
    v0 = *(int32_t*)((gp) + -0x63e8);                           // 0x001a91c8: lw $v0, -0x63e8($gp)
    g_002a4e24 = a0;  // Global at 0x002a4e24                   // 0x001a91cc: sw $a0, 0($v0)
    v0 = *(int32_t*)((gp) + -0x63e8);                           // 0x001a91d0: lw $v0, -0x63e8($gp)
    func_001a9960();  // 0x1a98a0                                // 0x001a91d4: jal 0x1a98a0
    g_002a4e44 = v1;  // Global at 0x002a4e44                   // 0x001a91d8: sw $v1, 0x20($v0)
    return;                                                     // 0x001a91e0: jr $ra
    sp = sp + 0x110;                                            // 0x001a91e4: addiu $sp, $sp, 0x110
}